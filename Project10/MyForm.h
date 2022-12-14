#pragma once
#include <string>
#include <fstream>
using namespace std;

namespace Project10 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelr;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ office;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelr = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->office = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(321, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Light Gaming";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"PC MAKER";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->CausesValidation = false;
			this->textBox1->Location = System::Drawing::Point(75, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter Budget:";
			// 
			// labelr
			// 
			this->labelr->AutoSize = true;
			this->labelr->Location = System::Drawing::Point(39, 278);
			this->labelr->Name = L"labelr";
			this->labelr->Size = System::Drawing::Size(0, 13);
			this->labelr->TabIndex = 10;
			this->labelr->Click += gcnew System::EventHandler(this, &MyForm::labelr_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(321, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Workstation";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 231);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(321, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Hardcore Gaming";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 202);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(321, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Medium Gaming";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// office
			// 
			this->office->Location = System::Drawing::Point(12, 144);
			this->office->Name = L"office";
			this->office->Size = System::Drawing::Size(321, 23);
			this->office->TabIndex = 14;
			this->office->Text = L"Office/Study";
			this->office->UseVisualStyleBackColor = true;
			this->office->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Enter Year:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(75, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 16;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(84, 67);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 17;
			this->button5->Text = L"UPDATE";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(432, 489);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->office);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->labelr);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Location = System::Drawing::Point(249, 45);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double budget;
		budget = System::Convert::ToInt64(textBox1->Text);
		std::fstream cpu;
		cpu.open("CPU.txt", ios::in);
		std::fstream stor;
		stor.open("storage.txt", ios::in);
		std::fstream ram;
		ram.open("RAM.txt", ios::in);
		fstream chip;
		chip.open("Chipset.txt", ios::in);
		fstream gpu;
		gpu.open("GPU.txt", ios::in);
		fstream psu;
		psu.open("PSU.txt", ios::in);
		bool igpu, looper = true;
		string name, cnt, arc, url, gname, spec, type, cbrand, chname, carc, stype, rating1, cooler;
		double game, wks, off, ser, cmsrp, gmsrp, smsrp, rmsrp, gscore, chmsrp, score, fscore, chscore, rscore, price, total, hard, med, light;
		int tdp, cl, speed, capac, sticks, scapac, t_tdp, rtdp, gtdp, chtdp, power, rating, year, stdp, buff = 100;

		while (1) {
			cpu >> name >> cbrand >> game >> wks >> off >> ser >> arc >> cnt >> tdp >> igpu >> cmsrp >> url;
			if (cmsrp > (budget * 0.60)) {
				continue;
			}
			else if (wks > 60) {
				continue;
			}
			else if (game < 50) {
				continue;
			}
			else {
				total = cmsrp;
				fscore = hard;
				t_tdp = tdp;
				while (1) {
					gpu >> gname >> light >> med >> hard >> gmsrp >> gtdp;
					if ((light < game - 5) || (light > game + 5)) {
						continue;
					}
					else {
						total = total + gmsrp;
						fscore = fscore + light;
						t_tdp = t_tdp + gtdp;
						while (1) {
							ram >> type >> capac >> sticks >> speed >> cl >> rmsrp >> rscore >> rtdp;
							if (sticks > 4) {
								continue;
							}
							else if ((cbrand == "A") && (speed < 3200)) {
								continue;
							}
							else {
								total = total + rmsrp;
								fscore = fscore + rscore;
								t_tdp = t_tdp + rtdp;
								while (1) {
									chip >> chname >> carc >> chmsrp >> chscore >> chtdp >> year;
									if (carc != arc) {
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
													continue;
												}
												else {
													total = total + price;
													fscore = fscore + rating;
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
			if ((total < budget) && (total > budget * 0.1)) {
				if ((tdp < 100) && (cbrand == "A")) {
					cooler = "Stock";
				}
				else {
					cooler = to_string(tdp) + "Or Higher Rated ";
				}
				string output;
				output = name + ": " + to_string(cmsrp) + "\n" + "Cooler: " + cooler + "\n" + type + " " + to_string(capac) + "GB @ " + to_string(speed) + ": " + to_string(rmsrp) + "\n" + chname + ": " + to_string(chmsrp) + "\n" + gname + ": " + to_string(gmsrp) + "\n" + to_string(scapac) + "GB " + stype + ": " + to_string(smsrp) + "\n" + "Total Power:" + to_string(t_tdp) + "\n" + to_string(power) + " " + rating1 + ": " + to_string(price) + "\n" + "Overall Score:" + to_string(fscore) + "\n" + "TOTAL: " + to_string(total) + "\n";
				System::String^ res = gcnew String(output.data());
				labelr->Text = res;
			}
			if (cpu.eof()) {
				break;
			}
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		double budget;
		budget = System::Convert::ToInt64(textBox1->Text);
		std::fstream cpu;
		cpu.open("CPU.txt", ios::in);
		std::fstream stor;
		stor.open("storage.txt", ios::in);
		std::fstream ram;
		ram.open("RAM.txt", ios::in);
		fstream chip;
		chip.open("Chipset.txt", ios::in);
		fstream psu;
		psu.open("PSU.txt", ios::in);
		bool igpu, looper = true;
		string name, cnt, arc, url, gname, spec, type, cbrand, chname, carc, stype, rating1, cooler;
		double game, wks, off, cmsrp, gmsrp, smsrp, rmsrp, chmsrp, score, fscore, chscore, rscore, price, total;
		int tdp, cl, speed, capac, sticks, scapac, t_tdp, rtdp, chtdp, power, rating, stdp, year, buff = 100;

		while (1) {
			cpu >> name >> cbrand >> game >> wks >> off >> arc >> cnt >> tdp >> igpu >> cmsrp >> url;
			if (cmsrp > (budget * 0.60)) {
				continue;
			}
			else if (wks > 60) {
				continue;
			}
			else if (igpu == 1) {
				total = cmsrp;
				fscore = off;
				t_tdp = tdp;
				while (1) {
					ram >> type >> capac >> sticks >> speed >> cl >> rmsrp >> rscore >> rtdp;
					if (sticks > 4) {
						continue;
					}
					else if ((cbrand == "A") && (speed < 3200)) {
						continue;
					}
					else {
						total = total + rmsrp;
						fscore = fscore + rscore;
						t_tdp = t_tdp + rtdp;
						while (1) {
							chip >> chname >> carc >> chmsrp >> chscore >> chtdp >> year;
							if (carc != arc) {
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
											continue;
										}
										else {
											total = total + price;
											fscore = fscore + rating;
										}
										if (psu.eof()) {
											looper = false;
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
			if ((total < budget) && (total > budget * 0.1)) {
				if ((tdp < 100) && (cbrand == "A")) {
					cooler = "Stock";
				}
				else {
					cooler = to_string(tdp) + "Or Higher Rated ";
				}
				string output;
				output = name + ": " + to_string(cmsrp) + "\n" + "Cooler: " + cooler + "\n" + type + " " + to_string(capac) + "GB @ " + to_string(speed) + ": " + to_string(rmsrp) + "\n" + chname + ": " + to_string(chmsrp) + "\n" + gname + ": " + to_string(gmsrp) + "\n" + to_string(scapac) + "GB " + stype + ": " + to_string(smsrp) + "\n" + "Total Power:" + to_string(t_tdp) + "\n" + to_string(power) + " " + rating1 + ": " + to_string(price) + "\n" + "Overall Score:" + to_string(fscore) + "\n" + "TOTAL: " + to_string(total) + "\n";
				System::String^ res = gcnew String(output.data());
				labelr->Text = res;
			}
			if (cpu.eof()) {
				break;
			}
		}
	}
	public: System::Void labelr_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double budget;
		budget = System::Convert::ToInt16(textBox1->Text);
		std::fstream cpu;
		cpu.open("CPU.txt", ios::in);
		std::fstream stor;
		stor.open("storage.txt", ios::in);
		std::fstream ram;
		ram.open("RAM.txt", ios::in);
		fstream chip;
		chip.open("Chipset.txt", ios::in);
		fstream gpu;
		gpu.open("GPU.txt", ios::in);
		fstream psu;
		psu.open("PSU.txt", ios::in);
		bool igpu, looper = true;
		string name, cnt, arc, url, gname, spec, type, cbrand, chname, carc, stype, rating1, cooler;
		double game, wks, off, ser, cmsrp, gmsrp, smsrp, rmsrp, gscore, chmsrp, score, fscore, chscore, rscore, price, total, hard, med, light;
		int tdp, cl, speed, capac, sticks, scapac, t_tdp, rtdp, gtdp, year, chtdp, power, rating, stdp, buff = 100;

		while (1) {
			cpu >> name >> cbrand >> game >> wks >> off >> ser >> arc >> cnt >> tdp >> igpu >> cmsrp >> url;
			if (cmsrp > (budget * 0.60)) {
				continue;
			}
			else if (wks > 60) {
				continue;
			}
			else if (game < 50) {
				continue;
			}
			else {
				total = cmsrp;
				fscore = hard;
				t_tdp = tdp;
				while (1) {
					gpu >> gname >> light >> med >> hard >> gmsrp >> gtdp;
					if ((hard < game - 5) || (hard > game + 5)) {
						continue;
					}
					else {
						total = total + gmsrp;
						fscore = fscore + hard;
						t_tdp = t_tdp + gtdp;
						while (1) {
							ram >> type >> capac >> sticks >> speed >> cl >> rmsrp >> rscore >> rtdp;
							if (sticks > 4) {
								continue;
							}
							else if ((cbrand == "A") && (speed < 3200)) {
								continue;
							}
							else {
								total = total + rmsrp;
								fscore = fscore + rscore;
								t_tdp = t_tdp + rtdp;
								while (1) {
									chip >> chname >> carc >> chmsrp >> chscore >> chtdp >> year;
									if (carc != arc) {
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
													continue;
												}
												else {
													total = total + price;
													fscore = fscore + rating;
												}
												if (psu.eof()) {
													looper = false;
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
			if ((total < budget) && (total > budget * 0.1)) {
				if ((tdp < 100) && (cbrand == "A")) {
					cooler = "Stock";
				}
				else {
					cooler = to_string(tdp) + "Or Higher Rated ";
				}
				string output;
				output = name + ": " + to_string(cmsrp) + "\n" + "Cooler: " + cooler + "\n" + type + " " + to_string(capac) + "GB @ " + to_string(speed) + ": " + to_string(rmsrp) + "\n" + chname + ": " + to_string(chmsrp) + "\n" + gname + ": " + to_string(gmsrp) + "\n" + to_string(scapac) + "GB " + stype + ": " + to_string(smsrp) + "\n" + "Total Power:" + to_string(t_tdp) + "\n" + to_string(power) + " " + rating1 + ": " + to_string(price) + "\n" + "Overall Score:" + to_string(fscore) + "\n" + "TOTAL: " + to_string(total) + "\n";
				System::String^ res = gcnew String(output.data());
				labelr->Text = res;
			}
			if (cpu.eof()) {
				break;
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		double budget;
		budget = System::Convert::ToInt16(textBox1->Text);
		std::fstream cpu;
		cpu.open("CPU.txt", ios::in);
		std::fstream stor;
		stor.open("storage.txt", ios::in);
		std::fstream ram;
		ram.open("RAM.txt", ios::in);
		fstream chip;
		chip.open("Chipset.txt", ios::in);
		fstream gpu;
		gpu.open("GPU.txt", ios::in);
		fstream psu;
		psu.open("PSU.txt", ios::in);
		bool igpu, looper = true;
		string name, cnt, arc, url, gname, spec, type, cbrand, chname, carc, stype, rating1, cooler;
		double game, wks, off, ser, cmsrp, gmsrp, smsrp, rmsrp, gscore, chmsrp, score, fscore, chscore, rscore, price, total, hard, med, light;
		int tdp, cl, speed, capac, sticks, scapac, t_tdp, rtdp, gtdp, chtdp, year, power, rating, stdp, buff = 100;
		while (1) {
			cpu >> name >> cbrand >> game >> wks >> off >> ser >> arc >> cnt >> tdp >> igpu >> cmsrp >> url;
			if (cmsrp > (budget * 0.60)) {
				continue;
			}
			else if (wks > 60) {
				continue;
			}
			else if (game < 50) {
				continue;
			}
			else {
				total = cmsrp;
				fscore = game;
				t_tdp = tdp;
				while (1) {
					gpu >> gname >> light >> med >> hard >> gmsrp >> gtdp;
					if ((med < game - 5) || (med > game + 5)) {
						continue;
					}
					else {
						total = total + gmsrp;
						fscore = fscore + med;
						t_tdp = t_tdp + gtdp;
						while (1) {
							ram >> type >> capac >> sticks >> speed >> cl >> rmsrp >> rscore >> rtdp;
							if (sticks > 4) {
								continue;
							}
							else if ((cbrand == "A") && (speed < 3200)) {
								continue;
							}
							else {
								total = total + rmsrp;
								fscore = fscore + rscore;
								t_tdp = t_tdp + rtdp;
								while (1) {
									chip >> chname >> carc >> chmsrp >> chscore >> chtdp >> year;
									if (carc != arc) {
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
													continue;
												}
												else {
													total = total + price;
													fscore = fscore + rating;
												}
												if (psu.eof()) {
													looper = false;
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
			if ((total < budget) && (total > budget * 0.1)) {
				if ((tdp < 100) && (cbrand == "A")) {
					cooler = "Stock";
				}
				else {
					cooler = to_string(tdp) + "Or Higher Rated ";
				}
				string output;
				output = name + ": " + to_string(cmsrp) + "\n" + "Cooler: " + cooler + "\n" + type + " " + to_string(capac) + "GB @ " + to_string(speed) + ": " + to_string(rmsrp) + "\n" + chname + ": " + to_string(chmsrp) + "\n" + gname + ": " + to_string(gmsrp) + "\n" + to_string(scapac) + "GB " + stype + ": " + to_string(smsrp) + "\n" + "Total Power:" + to_string(t_tdp) + "\n" + to_string(power) + " " + rating1 + ": " + to_string(price) + "\n" + "Overall Score:" + to_string(fscore) + "\n" + "TOTAL: " + to_string(total) + "\n";
				System::String^ res = gcnew String(output.data());
				labelr->Text = res;
			}
			if (cpu.eof()) {
				break;
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double budget;
		budget = System::Convert::ToInt16(textBox1->Text);
		std::fstream cpu;
		cpu.open("CPU.txt", ios::in);
		std::fstream stor;
		stor.open("storage.txt", ios::in);
		std::fstream ram;
		ram.open("RAM.txt", ios::in);
		fstream chip;
		chip.open("Chipset.txt", ios::in);
		fstream gpu;
		gpu.open("WGPU.txt", ios::in);
		int length = 0;
		fstream psu;
		psu.open("PSU.txt", ios::in);
		bool igpu, looper = true;
		string name, cnt, arc, url, gname, spec, type, cbrand, chname, carc, stype, rating1, cooler;
		double game, wks, off, ser, cmsrp, gmsrp, smsrp, rmsrp, gscore, chmsrp, score, fscore, chscore, rscore, price, total;
		int tdp, cl, speed, capac, sticks, scapac, t_tdp, rtdp, gtdp, chtdp, power, rating, stdp, buff = 100, year;

		while (1) {
			cpu >> name >> cbrand >> game >> wks >> off >> ser >> arc >> cnt >> tdp >> igpu >> cmsrp >> url;
			if (cmsrp > (budget * 0.60)) {
				continue;
			}
			else if (wks == 0) {
				continue;
			}
			else {
				t_tdp = tdp;
				total = cmsrp;
				fscore = gscore;
				while (1) {
					gpu >> gname >> gscore >> gmsrp >> gtdp;
					if ((gscore < game - 5) || (gscore > game + 5)) {
						continue;
					}
					else {
						t_tdp = gtdp + t_tdp;
						total = total + gmsrp;
						fscore = fscore + gscore;
						while (1) {
							ram >> type >> capac >> sticks >> speed >> cl >> rmsrp >> rscore >> rtdp;
							if ((cbrand == "A") && (speed < 3200)) {
								continue;
							}
							else if (capac < 16) {
								continue;
							}
							else {
								t_tdp = t_tdp + rtdp;
								total = total + rmsrp;
								fscore = fscore + rscore;
								while (1) {
									chip >> chname >> carc >> chmsrp >> chscore >> chtdp >> year;
									if (carc != arc) {
										continue;
									}
									else {
										fscore = chscore + fscore;
										t_tdp = t_tdp + chtdp;
										total = total + chmsrp;
										while (1) {
											stor >> scapac >> score >> stype >> smsrp >> stdp;
											fscore = fscore + score;
											total = total + smsrp;
											t_tdp = t_tdp + stdp;
											while (1) {
												psu >> power >> price >> rating;
												if (power < t_tdp + buff) {
													continue;
												}
												else {
													total = total + price;
													fscore = fscore + rating;
												}
												if (psu.eof()) {
													looper = false;
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
			if ((total < budget) && (total > budget * 0.1)) {
				if ((tdp < 100) && (cbrand == "A")) {
					cooler = "Stock";
				}
				else {
					cooler = to_string(tdp) + "Or Higher Rated ";
				}
				string output;
				output = name + ": " + to_string(cmsrp) + "\n" + "Cooler: " + cooler + "\n" + type + " " + to_string(capac) + "GB @ " + to_string(speed) + ": " + to_string(rmsrp) + "\n" + chname + ": " + to_string(chmsrp) + "\n" + gname + ": " + to_string(gmsrp) + "\n" + to_string(scapac) + "GB " + stype + ": " + to_string(smsrp) + "\n" + "Total Power:" + to_string(t_tdp) + "\n" + to_string(power) + " " + rating1 + ": " + to_string(price) + "\n" + "Overall Score:" + to_string(fscore) + "\n" + "TOTAL: " + to_string(total) + "\n";
				System::String^ res = gcnew String(output.data());
				labelr->Text = res;
			}
			if (cpu.eof()) {
				break;
			}
		}
	}
	};
}

