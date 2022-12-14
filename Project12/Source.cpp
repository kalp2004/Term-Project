#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void office(double budget);
void lightgaming(double budget);
void medgaming(double budget);
void hardcoregaming(double budget);
void workstation(double budget);
int main() {//main function
	int c;
	double budget;
	std::cout << "Welcome to PCBOT!!!\n Enter Budget:" << endl;
	cin >> budget;
	std::cout << "Select Option: \n 1. Office PC \n 2. Light Gaming \n 3.Mid Gaming \n 4. Hardcore Gaming \n 5.Workstation\n";
	cin >> c;
	if (c == 1) {
		office(budget);
	}
	else if (c == 2) {
		lightgaming(budget);
	}
	else if (c == 3) {
		medgaming(budget);
	}
	else if (c == 4) {
		hardcoregaming(budget);
	}
	else if (c == 5) {
		workstation(budget);
	}
}
void office(double budget){//office function
	fstream cpu;//opening files
	cpu.open("CPU.txt", ios::in);
	if (cpu.fail()) {
		cerr << "File not existing1"<<endl;
	}
	fstream stor;
	stor.open("storage.txt", ios::in);
	if (stor.fail()) {
		cerr << "File not existing2" << endl;
	}
	fstream ram;
	ram.open("RAM.txt", ios::in);
	if (ram.fail()) {
		cerr << "File not existing3" << endl;
	}
	fstream chip;
	chip.open("Chipset.txt", ios::in);
	if (chip.fail()) {
		cerr << "File not existing4" << endl;
	}
	fstream psu;
	psu.open("PSU.txt", ios::in);
	if (psu.fail()) {
		cerr << "File not existing5" << endl;
	}
	cout << "files opened successfully" << endl;
	bool igpu, looper = true;//declaring all variables required
	std::string name, cnt, arc, url, gname, spec, type, cbrand, chname, carc, stype, rating1, cooler;
	double game, wks, off, score, fscore, chscore, rscore;
	int tdp, cl, cn, speed, capac, sticks, scapac, t_tdp, rtdp, chtdp, power, rating, stdp, year, buff = 100, cmsrp, gmsrp, smsrp, rmsrp, chmsrp, price, total = 0; 
	std::cout<< "Loading..."<<endl;
	while (1) {
		fscore = 0;
		cn = 0;
		cpu >> name >> cbrand >> game >> wks >> off >> arc >> cnt >> tdp >> igpu >> cmsrp >> url;
		if (cmsrp > (budget * 0.60)) {//picking a cpu
			cn = 1;
			continue;
		}
		else if (wks > 60) {
			cn = 1;
			continue;
		}
		else if (igpu == 1) {
			total = cmsrp;
			fscore = off;
			t_tdp = tdp;
			while (1) {
				cout << "cpu selected" << endl;
				ram >> type >> capac >> sticks >> speed >> cl >> rmsrp >> rscore >> rtdp;
				if (sticks > 4) {//picking ram
					cn = 1;
					continue;
				}
				else if ((cbrand == "A") && (speed < 3200)) {
					cn = 1;
					continue;
				}
				else {
					total = total + rmsrp;
					fscore = fscore + rscore;
					t_tdp = t_tdp + rtdp;
					cout << "ram selected" << endl;
					while (1) {
						cn = 0;
						chip >> chname >> carc >> chmsrp >> chscore >> chtdp >> year;
						if (carc != arc) {//picking a chipset/motherboard
							cout << "chipset not matching" << endl;
							cn = 1;
							continue;
						}
						else {
							fscore = chscore + fscore;
							total = total + chmsrp;
							t_tdp = t_tdp + chtdp;
							cout << "chipset selected" << endl;
							while (1) {
								cn = 0;
								stor >> scapac >> score >> stype >> smsrp >> stdp;//picking storage
								fscore = fscore + score;
								total = total + smsrp;
								t_tdp = t_tdp + stdp;
								cout << "storage selected" << endl;
								while (1) {
									psu >> power >> price >> rating;
									if (power < t_tdp + buff) {//picking psu
										cout << t_tdp;
										cout << "psu unsufficient" << endl;
										cn = 1;
										continue;
									}
									else {
										cout << "psu<<seclected" << endl;
										total = total + price;
										fscore = fscore + rating;
										cout << "total:"<<total << endl;
										if (cn != 1) {
											if ((total < budget) && (total > budget * 0.90)) {
												if ((tdp < 100) && (cbrand == "A")) {
													cooler = "Stock";
												}
												else {
													cooler = to_string(tdp) + " Or Higher Rated ";
												}
												if (rating == 80) {
													rating1 = " 80+ White";
												}
												else if (rating == 82) {
													rating1 = " 80+ Bronze";
												}
												else if (rating == 85) {
													rating1 = " 80+ Silver";
												}
												else if (rating == 87) {
													rating1 = " 80+ Gold";
												}
												else if (rating == 89) {
													rating1 = " 80+ Platinum";
												}
												else {
													rating1 = " 80+ Titanium";
												}
												string output;//outputting the configuration
												output = name + ": " + to_string(cmsrp)+"$" + "\n" + "Cooler: " + cooler + "\n" + type + " " + to_string(capac) + "GB @ " + to_string(speed) + ": " + to_string(rmsrp)+"$" + "\n" + chname + ": " + to_string(chmsrp)+"$" + "\n" + to_string(scapac) + "GB " + stype + ": " + to_string(smsrp) + "$" + "\n" + "Total Power:" + to_string(t_tdp)+"W" + "\n" + to_string(power) + "W" + rating1 + ": " + to_string(price) + "$" + "\n" + "Overall Score:" + to_string(floor(fscore)) + "\n" + "TOTAL: " + to_string(total) + "$" + "\n";
												std::cout << output;
												cout << "------------------------------------------" << endl << endl;
											}
										}
									}
									if (psu.eof()) {
										break;
									}
								}
								if (stor.eof()) {
									break;
								}
							}
						}
						if (chip.eof()) {
							break;
						}
					}
				}
				if (ram.eof()) {
					break;
				}
			}
		}
		if (cpu.eof()) {
			break;
		}
	}
	cpu.close();
	ram.close();
	chip.close();
	psu.close();
	stor.close();
}

void hardcoregaming(double budget) {
	fstream cpu;
	cpu.open("CPU.txt", ios::in);
	fstream stor;
	stor.open("storage.txt", ios::in);
	fstream ram;
	ram.open("RAM.txt", ios::in);
	fstream chip;
	chip.open("Chipset.txt", ios::in);
	fstream psu;
	psu.open("PSU.txt", ios::in);
	fstream gpu;
	gpu.open("GPU.txt", ios::in);
	bool igpu, looper = true;
	string name, cnt, arc, url, gname, spec, type, cbrand, chname, carc, stype, rating1, cooler;
	double game, wks, off, ser, cmsrp, gmsrp, smsrp, rmsrp, gscore, chmsrp, score, fscore, chscore, rscore, price, total, hard, med, light;
	int tdp, cl, speed, capac, cn, sticks, scapac, t_tdp, rtdp, gtdp, year, chtdp, power, rating, stdp, buff = 100;

	while (1) {
		cn = 0;
		cpu >> name >> cbrand >> game >> wks >> off >> ser >> arc >> cnt >> tdp >> igpu >> cmsrp >> url;
		if (cmsrp > (budget * 0.60)) {//picking cpu
			cn = 1;
			continue;
		}
		else if (wks > 60) {
			cn = 1;
			continue;
		}
		else if (game < 50) {
			cn = 1;
			continue;
		}
		else {
			total = cmsrp;
			fscore = game;
			t_tdp = tdp;
			while (1) {
				gpu >> gname >> light >> med >> hard >> gmsrp >> gtdp;//picking gpu
				if ((hard < game - 5) || (hard > game + 5)) {
					cn = 1;
					continue;
				}
				else {
					total = total + gmsrp;
					fscore = fscore + hard;
					t_tdp = t_tdp + gtdp;
					while (1) {
						ram >> type >> capac >> sticks >> speed >> cl >> rmsrp >> rscore >> rtdp;//picking ram
						if (sticks > 4) {
							cn = 1;
							continue;
						}
						else if ((cbrand == "A") && (speed < 3200)) {
							cn = 1;
							continue;
						}
						else {
							total = total + rmsrp;
							fscore = fscore + rscore;
							t_tdp = t_tdp + rtdp;
							while (1) {
								chip >> chname >> carc >> chmsrp >> chscore >> chtdp >> year;//picking chipset
								if (carc != arc) {
									cn = 1;
									continue;
								}
								else {
									fscore = chscore + fscore;
									total = total + chmsrp;
									t_tdp = t_tdp + chtdp;
									while (1) {
										stor >> scapac >> score >> stype >> smsrp >> stdp;//picking storage
										fscore = fscore + score;
										total = total + smsrp;
										t_tdp = t_tdp + stdp;
										while (1) {
											psu >> power >> price >> rating;//picking psu
											if (power < t_tdp + buff) {
												cn = 1;
												continue;
											}
											else {
												total = total + price;
												fscore = fscore + rating;
												if (cn != 1) {
													if ((total < budget) && (total > budget * 0.1)) {
														if ((tdp < 100) && (cbrand == "A")) {
															cooler = "Stock";
														}
														else {
															cooler = to_string(tdp) + "Or Higher Rated ";
														}
														if (rating == 80) {
															rating1 = " 80+ White";
														}
														else if (rating == 82) {
															rating1 = " 80+ Bronze";
														}
														else if (rating == 85) {
															rating1 = " 80+ Silver";
														}
														else if (rating == 87) {
															rating1 = " 80+ Gold";
														}
														else if (rating == 89) {
															rating1 = " 80+ Platinum";
														}
														else {
															rating1 = " 80+ Titanium";
														}
														string output;//outputting the configuration
														output = name + ": " + to_string(cmsrp) + "$" + "\n" + "Cooler: " + cooler + "\n" + gname + ": " + to_string(gmsrp) + "$" + type + " " + to_string(capac) + "GB @ " + to_string(speed) + ": " + to_string(rmsrp) + "$" + "\n" + chname + ": " + to_string(chmsrp) + "$" + "\n" + gname + ": " + to_string(gmsrp) + "$" + "\n" + to_string(scapac) + "GB " + stype + ": " + to_string(smsrp) + "$" + "\n" + "Total Power:" + to_string(t_tdp) + "\n" + to_string(power) + "W" + rating1 + ": " + to_string(price) + "$" + "\n" + "Overall Score:" + to_string(fscore) + "\n" + "TOTAL: " + to_string(total) + "$" + "\n";
														std::cout << output;
														cout << "------------------------------------------" << endl << endl;
													}
												}
											}
											if (psu.eof()) {
												break;
											}
										}
										if (stor.eof()) {
											break;
										}
									}
								}
								if (chip.eof()) {
									break;
								}
							}
						}
						if (ram.eof()) {
							break;
						}
					}
				}
				if (gpu.eof()) {
					break;
				}
			}
		}
		if (cpu.eof()) {
			break;
		}
	}
	cpu.close();
	ram.close();
	gpu.close();
	chip.close();
	psu.close();
	stor.close();
}
//same code for light and mid gaming and workstation, just the benchmark compared will be light and mid respectively. 
void lightgaming(double budget) {
	fstream cpu;
	cpu.open("CPU.txt", ios::in);
	fstream stor;
	stor.open("storage.txt", ios::in);
	fstream ram;
	ram.open("RAM.txt", ios::in);
	fstream chip;
	chip.open("Chipset.txt", ios::in);
	fstream psu;
	psu.open("PSU.txt", ios::in);
	fstream gpu;
	gpu.open("GPU.txt", ios::in);
	bool igpu, looper = true;
	string name, cnt, arc, url, gname, spec, type, cbrand, chname, carc, stype, rating1, cooler;
	double game, wks, off, ser, cmsrp, gmsrp, smsrp, rmsrp, gscore, chmsrp, score, fscore, chscore, rscore, price, total, hard, med, light;
	int tdp, cl, speed, capac, cn, sticks, scapac, t_tdp, rtdp, gtdp, year, chtdp, power, rating, stdp, buff = 100;

	while (1) {
		cn = 0;
		cpu >> name >> cbrand >> game >> wks >> off >> ser >> arc >> cnt >> tdp >> igpu >> cmsrp >> url;
		if (cmsrp > (budget * 0.60)) {
			cn = 1;
			continue;
		}
		else if (wks > 60) {
			cn = 1;
			continue;
		}
		else if (game < 50) {
			cn = 1;
			continue;
		}
		else {
			total = cmsrp;
			fscore = game;
			t_tdp = tdp;
			while (1) {
				gpu >> gname >> light >> med >> hard >> gmsrp >> gtdp;
				if ((light < game - 5) || (light > game + 5)) {
					cn = 1;
					continue;
				}
				else {
					total = total + gmsrp;
					fscore = fscore + light;
					t_tdp = t_tdp + gtdp;
					while (1) {
						ram >> type >> capac >> sticks >> speed >> cl >> rmsrp >> rscore >> rtdp;
						if (sticks > 4) {
							cn = 1;
							continue;
						}
						else if ((cbrand == "A") && (speed < 3200)) {
							cn = 1;
							continue;
						}
						else {
							total = total + rmsrp;
							fscore = fscore + rscore;
							t_tdp = t_tdp + rtdp;
							while (1) {
								chip >> chname >> carc >> chmsrp >> chscore >> chtdp >> year;
								if (carc != arc) {
									cn = 1;
									continue;
								}
								else {
									fscore = chscore + fscore;
									total = total + chmsrp;
									t_tdp = t_tdp + chtdp;
									while (1) {
										stor >> scapac >> score >> stype >> smsrp >> stdp;
										fscore = fscore + score;
										total = total + smsrp;
										t_tdp = t_tdp + stdp;
										while (1) {
											psu >> power >> price >> rating;
											if (power < t_tdp + buff) {
												cn = 1;
												continue;
											}
											else {
												total = total + price;
												fscore = fscore + rating;
												if (cn != 1) {
													if ((total < budget) && (total > budget * 0.1)) {
														if ((tdp < 100) && (cbrand == "A")) {
															cooler = "Stock";
														}
														else {
															cooler = to_string(tdp) + "Or Higher Rated ";
														}
														if (rating == 80) {
															rating1 = " 80+ White";
														}
														else if (rating == 82) {
															rating1 = " 80+ Bronze";
														}
														else if (rating == 85) {
															rating1 = " 80+ Silver";
														}
														else if (rating == 87) {
															rating1 = " 80+ Gold";
														}
														else if (rating == 89) {
															rating1 = " 80+ Platinum";
														}
														else {
															rating1 = " 80+ Titanium";
														}
														string output;
														output = name + ": " + to_string(cmsrp) +"$"+ "\n" + "Cooler: " + cooler + "\n"+gname + ": "+to_string(gmsrp) +"$" + type + " " + to_string(capac) + "GB @ " + to_string(speed) + ": " + to_string(rmsrp) + "$" + "\n" + chname + ": " + to_string(chmsrp) + "$" + "\n" + gname + ": " + to_string(gmsrp) + "$" + "\n" + to_string(scapac) + "GB " + stype + ": " + to_string(smsrp) + "$" + "\n" + "Total Power:" + to_string(t_tdp) + "\n" + to_string(power) + "W" + rating1 + ": " + to_string(price) + "$" + "\n" + "Overall Score:" + to_string(fscore) + "\n" + "TOTAL: " + to_string(total) + "$" + "\n";
														std::cout << output;
														cout << "------------------------------------------" << endl << endl;
													}
												}
												if (psu.eof()) {
													break;
												}
											}
											if (stor.eof()) {
												break;
											}
										}
									}
									if (chip.eof()) {
										break;
									}
								}
							}
							if (ram.eof()) {
								break;
							}
						}
					}
					if (gpu.eof()) {
						break;
					}
				}
			}
		}
		if (cpu.eof()) {
			break;
		}
	}
	cpu.close();
	ram.close();
	gpu.close();
	chip.close();
	psu.close();
	stor.close();
}
void medgaming(double budget) {
	fstream cpu;
	cpu.open("CPU.txt", ios::in);
	fstream stor;
	stor.open("storage.txt", ios::in);
	fstream ram;
	ram.open("RAM.txt", ios::in);
	fstream chip;
	chip.open("Chipset.txt", ios::in);
	fstream psu;
	psu.open("PSU.txt", ios::in);
	fstream gpu;
	gpu.open("GPU.txt", ios::in);
	bool igpu, looper = true;
	string name, cnt, arc, url, gname, spec, type, cbrand, chname, carc, stype, rating1, cooler;
	double game, wks, off, ser, cmsrp, gmsrp, smsrp, rmsrp, gscore, chmsrp, score, fscore, chscore, rscore, price, total, hard, med, light;
	int tdp, cl, speed, capac, cn, sticks, scapac, t_tdp, rtdp, gtdp, year, chtdp, power, rating, stdp, buff = 100;

	while (1) {
		cn = 0;
		cpu >> name >> cbrand >> game >> wks >> off >> ser >> arc >> cnt >> tdp >> igpu >> cmsrp >> url;
		if (cmsrp > (budget * 0.60)) {
			cn = 1;
			continue;
		}
		else if (wks > 60) {
			cn = 1;
			continue;
		}
		else if (game < 50) {
			cn = 1;
			continue;
		}
		else {
			total = cmsrp;
			fscore = game;
			t_tdp = tdp;
			while (1) {
				gpu >> gname >> light >> med >> hard >> gmsrp >> gtdp;
				if ((med < game - 5) || (med > game + 5)) {
					cn = 1;
					continue;
				}
				else {
					total = total + gmsrp;
					fscore = fscore + med;
					t_tdp = t_tdp + gtdp;
					while (1) {
						ram >> type >> capac >> sticks >> speed >> cl >> rmsrp >> rscore >> rtdp;
						if (sticks > 4) {
							cn = 1;
							continue;
						}
						else if ((cbrand == "A") && (speed < 3200)) {
							cn = 1;
							continue;
						}
						else {
							total = total + rmsrp;
							fscore = fscore + rscore;
							t_tdp = t_tdp + rtdp;
							while (1) {
								chip >> chname >> carc >> chmsrp >> chscore >> chtdp >> year;
								if (carc != arc) {
									cn = 1;
									continue;
								}
								else {
									fscore = chscore + fscore;
									total = total + chmsrp;
									t_tdp = t_tdp + chtdp;
									while (1) {
										stor >> scapac >> score >> stype >> smsrp >> stdp;
										fscore = fscore + score;
										total = total + smsrp;
										t_tdp = t_tdp + stdp;
										while (1) {
											psu >> power >> price >> rating;
											if (power < t_tdp + buff) {
												cn = 1;
												continue;
											}
											else {
												total = total + price;
												fscore = fscore + rating;
												if (cn != 1) {
													if ((total < budget) && (total > budget * 0.1)) {
														if ((tdp < 100) && (cbrand == "A")) {
															cooler = "Stock";
														}
														else {
															cooler = to_string(tdp) + "Or Higher Rated ";
														}
														if (rating == 80) {
															rating1 = " 80+ White";
														}
														else if (rating == 82) {
															rating1 = " 80+ Bronze";
														}
														else if (rating == 85) {
															rating1 = " 80+ Silver";
														}
														else if (rating == 87) {
															rating1 = " 80+ Gold";
														}
														else if (rating == 89) {
															rating1 = " 80+ Platinum";
														}
														else {
															rating1 = " 80+ Titanium";
														}
														string output;
														output = name + ": " + to_string(cmsrp) + "$" + "\n" + "Cooler: " + cooler + "\n" + gname + ": " + to_string(gmsrp) + "$" + type + " " + to_string(capac) + "GB @ " + to_string(speed) + ": " + to_string(rmsrp) + "$" + "\n" + chname + ": " + to_string(chmsrp) + "$" + "\n" + gname + ": " + to_string(gmsrp) + "$" + "\n" + to_string(scapac) + "GB " + stype + ": " + to_string(smsrp) + "$" + "\n" + "Total Power:" + to_string(t_tdp) + "\n" + to_string(power) + "W" + rating1 + ": " + to_string(price) + "$" + "\n" + "Overall Score:" + to_string(fscore) + "\n" + "TOTAL: " + to_string(total) + "$" + "\n";
														std::cout << output;
														cout << "------------------------------------------" << endl << endl;
													}
												}
											}
											if (psu.eof()) {
												break;
											}
										}
										if (stor.eof()) {
											break;
										}
									}
								}
								if (chip.eof()) {
									break;
								}
							}
						if (ram.eof()) {
							break;
						}
					}					}
						
					}
				}
			if (gpu.eof()) {
				break;
				}
			}
		if (cpu.eof()) {
			break;
		}
	}
	cpu.close();
	ram.close();
	gpu.close();
	chip.close();
	psu.close();
	stor.close();
}
void workstation(double budget) {
	fstream cpu;
	cpu.open("CPU.txt", ios::in);
	fstream stor;
	stor.open("storage.txt", ios::in);
	fstream ram;
	ram.open("RAM.txt", ios::in);
	fstream chip;
	chip.open("Chipset.txt", ios::in);
	fstream psu;
	psu.open("PSU.txt", ios::in);
	fstream gpu;
	gpu.open("WGPU.txt", ios::in);
	bool igpu, looper = true;
	string name, cnt, arc, url, gname, spec, type, cbrand, chname, carc, stype, rating1, cooler;
	double game, wks, off, ser, cmsrp, gmsrp, smsrp, rmsrp, gscore, chmsrp, score, fscore, chscore, rscore, price, total, hard, med, light;
	int tdp, cl, speed, capac, cn, sticks, scapac, t_tdp, rtdp, gtdp, year, chtdp, power, rating, stdp, buff = 100;

	while (1) {
		cn = 0;
		cpu >> name >> cbrand >> game >> wks >> off >> ser >> arc >> cnt >> tdp >> igpu >> cmsrp >> url;
		if (cmsrp > (budget * 0.60)) {
			cn = 1;
			continue;
		}
		else if (wks < 50) {
			cn = 1;
			continue;
		}
		else {
			total = cmsrp;
			fscore = wks;
			t_tdp = tdp;
			while (1) {
				gpu >> gname >> gscore >> gmsrp >> gtdp;
				if (gscore < wks - 20) {
					cn = 1;
					continue;
				}
				else {
					total = total + gmsrp;
					fscore = fscore + gscore;
					t_tdp = t_tdp + gtdp;
					while (1) {
						ram >> type >> capac >> sticks >> speed >> cl >> rmsrp >> rscore >> rtdp;
						if (capac < 32) {
							cn = 1;
							continue;
						}
						else if ((cbrand == "A") && (speed < 3200)) {
							cn = 1;
							continue;
						}
						else {
							total = total + rmsrp;
							fscore = fscore + rscore;
							t_tdp = t_tdp + rtdp;
							while (1) {
								chip >> chname >> carc >> chmsrp >> chscore >> chtdp >> year;
								if (carc != arc) {
									cn = 1;
									continue;
								}
								else {
									fscore = chscore + fscore;
									total = total + chmsrp;
									t_tdp = t_tdp + chtdp;
									while (1) {
										stor >> scapac >> score >> stype >> smsrp >> stdp;
										fscore = fscore + score;
										total = total + smsrp;
										t_tdp = t_tdp + stdp;
										while (1) {
											psu >> power >> price >> rating;
											if (power < t_tdp + buff) {
												cn = 1;
												continue;
											}
											else {
												total = total + price;
												fscore = fscore + rating;
												if (cn != 1) {
													if ((total < budget) && (total > budget * 0.1)) {
														if ((tdp < 100) && (cbrand == "A")) {
															cooler = "Stock";
														}
														else {
															cooler = to_string(tdp) + "Or Higher Rated ";
														}
														if (rating == 80) {
															rating1 = " 80+ White";
														}
														else if (rating == 82) {
															rating1 = " 80+ Bronze";
														}
														else if (rating == 85) {
															rating1 = " 80+ Silver";
														}
														else if (rating == 87) {
															rating1 = " 80+ Gold";
														}
														else if (rating == 89) {
															rating1 = " 80+ Platinum";
														}
														else {
															rating1 = " 80+ Titanium";
														}
														string output;
														output = name + ": " + to_string(cmsrp) + "$" + "\n" + "Cooler: " + cooler + "\n" + gname + ": " + to_string(gmsrp) + "$" + type + " " + to_string(capac) + "GB @ " + to_string(speed) + ": " + to_string(rmsrp) + "$" + "\n" + chname + ": " + to_string(chmsrp) + "$" + "\n" + gname + ": " + to_string(gmsrp) + "$" + "\n" + to_string(scapac) + "GB " + stype + ": " + to_string(smsrp) + "$" + "\n" + "Total Power:" + to_string(t_tdp) + "\n" + to_string(power) + "W" + rating1 + ": " + to_string(price) + "$" + "\n" + "Overall Score:" + to_string(fscore) + "\n" + "TOTAL: " + to_string(total) + "$" + "\n";
														std::cout << output;
														cout << "------------------------------------------" << endl << endl;
													}
												}
												if (psu.eof()) {
													looper = false;
													break;
												}
											}
											if (stor.eof()) {
												break;
											}
										}
									}
									if (chip.eof()) {
										break;
									}
								}
							}
							if (ram.eof()) {
								break;
							}
						}
					}
					if (gpu.eof()) {
						break;
					}
				}
			}
		}
	}
	cpu.close();
	ram.close();
	gpu.close();
	chip.close();
	psu.close();
	stor.close();
}