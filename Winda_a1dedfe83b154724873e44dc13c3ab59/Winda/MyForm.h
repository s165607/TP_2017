#pragma once
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>



namespace Winda {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	struct Czlowiek
	{
		int skad;
		int dokad;
	};

	vector<Czlowiek> Kolejka;
	vector<Czlowiek> Win;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Button^  Exit;


	private: System::Windows::Forms::Button^  P0_D4;
	private: System::Windows::Forms::Button^  P0_D3;
	private: System::Windows::Forms::Button^  P0_D2;
	private: System::Windows::Forms::Button^  P0_D1;
	private: System::Windows::Forms::Button^  P1_D0;
	private: System::Windows::Forms::Button^  P1_D2;
	private: System::Windows::Forms::Button^  P1_D3;
	private: System::Windows::Forms::Button^  P1_D4;
	private: System::Windows::Forms::Button^  P2_D0;
	private: System::Windows::Forms::Button^  P2_D1;
	private: System::Windows::Forms::Button^  P2_D3;
	private: System::Windows::Forms::Button^  P2_D4;
	private: System::Windows::Forms::Button^  P3_D0;
	private: System::Windows::Forms::Button^  P3_D1;
	private: System::Windows::Forms::Button^  P3_D2;
	private: System::Windows::Forms::Button^  P3_D4;
	private: System::Windows::Forms::Button^  P4_D0;
	private: System::Windows::Forms::Button^  P4_D1;
	private: System::Windows::Forms::Button^  P4_D2;
	private: System::Windows::Forms::Button^  P4_D3;
	private: System::Windows::Forms::TextBox^  T0_D1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::TextBox^  T0_D2;
	private: System::Windows::Forms::TextBox^  T0_D3;
	private: System::Windows::Forms::TextBox^  T0_D4;
	private: System::Windows::Forms::TextBox^  T1_D0;
	private: System::Windows::Forms::TextBox^  T1_D2;
	private: System::Windows::Forms::TextBox^  T1_D3;
	private: System::Windows::Forms::TextBox^  T1_D4;
	private: System::Windows::Forms::TextBox^  T2_D0;
	private: System::Windows::Forms::TextBox^  T2_D1;
	private: System::Windows::Forms::TextBox^  T2_D3;
	private: System::Windows::Forms::TextBox^  T2_D4;
	private: System::Windows::Forms::TextBox^  T3_D0;
	private: System::Windows::Forms::TextBox^  T3_D1;
	private: System::Windows::Forms::TextBox^  T3_D2;
	private: System::Windows::Forms::TextBox^  T3_D4;
	private: System::Windows::Forms::TextBox^  T4_D0;
	private: System::Windows::Forms::TextBox^  T4_D1;
	private: System::Windows::Forms::TextBox^  T4_D2;
	private: System::Windows::Forms::TextBox^  T4_D3;
	private: System::Windows::Forms::TextBox^  TW_D0;
	private: System::Windows::Forms::TextBox^  TW_D1;
	private: System::Windows::Forms::TextBox^  TW_D2;
	private: System::Windows::Forms::TextBox^  TW_D3;
	private: System::Windows::Forms::TextBox^  TW_D4;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::TextBox^  T4_S;
	private: System::Windows::Forms::TextBox^  T3_S;
	private: System::Windows::Forms::TextBox^  T2_S;
	private: System::Windows::Forms::TextBox^  T1_S;
	private: System::Windows::Forms::TextBox^  T0_S;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::TextBox^  TW_S;
	private: System::Windows::Forms::Timer^  Z_Powrot;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::TextBox^  TW_M;
	private: System::Windows::Forms::Button^  B_Start;
private: System::Windows::Forms::Timer^  Timer;

	private: System::Windows::Forms::Timer^  Z_Pow_Winda;


	public:

		MyForm(void)
		{
			InitializeComponent();
		}

	private: System::Windows::Forms::Label^  N_Winda;
	private: System::Windows::Forms::PictureBox^  Szyb;
	private: System::Windows::Forms::PictureBox^  Winda;
	private: System::Windows::Forms::Timer^  Z_Winda;
	private: System::ComponentModel::IContainer^  components;

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->N_Winda = (gcnew System::Windows::Forms::Label());
			this->Szyb = (gcnew System::Windows::Forms::PictureBox());
			this->Winda = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Z_Winda = (gcnew System::Windows::Forms::Timer(this->components));
			this->P0_D3 = (gcnew System::Windows::Forms::Button());
			this->P0_D4 = (gcnew System::Windows::Forms::Button());
			this->P0_D2 = (gcnew System::Windows::Forms::Button());
			this->P0_D1 = (gcnew System::Windows::Forms::Button());
			this->P1_D0 = (gcnew System::Windows::Forms::Button());
			this->P1_D2 = (gcnew System::Windows::Forms::Button());
			this->P1_D3 = (gcnew System::Windows::Forms::Button());
			this->P1_D4 = (gcnew System::Windows::Forms::Button());
			this->P2_D1 = (gcnew System::Windows::Forms::Button());
			this->P2_D3 = (gcnew System::Windows::Forms::Button());
			this->P2_D4 = (gcnew System::Windows::Forms::Button());
			this->P3_D0 = (gcnew System::Windows::Forms::Button());
			this->P3_D1 = (gcnew System::Windows::Forms::Button());
			this->P3_D2 = (gcnew System::Windows::Forms::Button());
			this->P3_D4 = (gcnew System::Windows::Forms::Button());
			this->P4_D0 = (gcnew System::Windows::Forms::Button());
			this->P4_D1 = (gcnew System::Windows::Forms::Button());
			this->P4_D2 = (gcnew System::Windows::Forms::Button());
			this->P4_D3 = (gcnew System::Windows::Forms::Button());
			this->P2_D0 = (gcnew System::Windows::Forms::Button());
			this->T0_D1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->T0_D2 = (gcnew System::Windows::Forms::TextBox());
			this->T0_D3 = (gcnew System::Windows::Forms::TextBox());
			this->T0_D4 = (gcnew System::Windows::Forms::TextBox());
			this->T1_D0 = (gcnew System::Windows::Forms::TextBox());
			this->T1_D2 = (gcnew System::Windows::Forms::TextBox());
			this->T1_D3 = (gcnew System::Windows::Forms::TextBox());
			this->T1_D4 = (gcnew System::Windows::Forms::TextBox());
			this->T2_D0 = (gcnew System::Windows::Forms::TextBox());
			this->T2_D1 = (gcnew System::Windows::Forms::TextBox());
			this->T2_D3 = (gcnew System::Windows::Forms::TextBox());
			this->T2_D4 = (gcnew System::Windows::Forms::TextBox());
			this->T3_D0 = (gcnew System::Windows::Forms::TextBox());
			this->T3_D1 = (gcnew System::Windows::Forms::TextBox());
			this->T3_D2 = (gcnew System::Windows::Forms::TextBox());
			this->T3_D4 = (gcnew System::Windows::Forms::TextBox());
			this->T4_D0 = (gcnew System::Windows::Forms::TextBox());
			this->T4_D1 = (gcnew System::Windows::Forms::TextBox());
			this->T4_D2 = (gcnew System::Windows::Forms::TextBox());
			this->T4_D3 = (gcnew System::Windows::Forms::TextBox());
			this->TW_D0 = (gcnew System::Windows::Forms::TextBox());
			this->TW_D1 = (gcnew System::Windows::Forms::TextBox());
			this->TW_D2 = (gcnew System::Windows::Forms::TextBox());
			this->TW_D3 = (gcnew System::Windows::Forms::TextBox());
			this->TW_D4 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->T4_S = (gcnew System::Windows::Forms::TextBox());
			this->T3_S = (gcnew System::Windows::Forms::TextBox());
			this->T2_S = (gcnew System::Windows::Forms::TextBox());
			this->T1_S = (gcnew System::Windows::Forms::TextBox());
			this->T0_S = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->TW_S = (gcnew System::Windows::Forms::TextBox());
			this->Z_Powrot = (gcnew System::Windows::Forms::Timer(this->components));
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->TW_M = (gcnew System::Windows::Forms::TextBox());
			this->Z_Pow_Winda = (gcnew System::Windows::Forms::Timer(this->components));
			this->B_Start = (gcnew System::Windows::Forms::Button());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Szyb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Winda))->BeginInit();
			this->SuspendLayout();
			// 
			// N_Winda
			// 
			this->N_Winda->AutoSize = true;
			this->N_Winda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N_Winda->Location = System::Drawing::Point(568, 9);
			this->N_Winda->Name = L"N_Winda";
			this->N_Winda->Size = System::Drawing::Size(184, 55);
			this->N_Winda->TabIndex = 0;
			this->N_Winda->Text = L"WINDA";
			// 
			// Szyb
			// 
			this->Szyb->Enabled = false;
			this->Szyb->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Szyb.Image")));
			this->Szyb->Location = System::Drawing::Point(-4, 80);
			this->Szyb->Name = L"Szyb";
			this->Szyb->Size = System::Drawing::Size(1362, 756);
			this->Szyb->TabIndex = 1;
			this->Szyb->TabStop = false;
			// 
			// Winda
			// 
			this->Winda->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Winda.Image")));
			this->Winda->Location = System::Drawing::Point(436, 684);
			this->Winda->Name = L"Winda";
			this->Winda->Size = System::Drawing::Size(449, 149);
			this->Winda->TabIndex = 2;
			this->Winda->TabStop = false;
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Exit->Location = System::Drawing::Point(1164, 757);
			this->Exit->Margin = System::Windows::Forms::Padding(0);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(147, 54);
			this->Exit->TabIndex = 4;
			this->Exit->Text = L"Wyjście";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// Z_Winda
			// 
			this->Z_Winda->Interval = 15;
			this->Z_Winda->Tick += gcnew System::EventHandler(this, &MyForm::Z_Winda_Tick);
			// 
			// P0_D3
			// 
			this->P0_D3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P0_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P0_D3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P0_D3->Location = System::Drawing::Point(12, 745);
			this->P0_D3->Name = L"P0_D3";
			this->P0_D3->Size = System::Drawing::Size(20, 22);
			this->P0_D3->TabIndex = 7;
			this->P0_D3->Text = L"3";
			this->P0_D3->UseVisualStyleBackColor = false;
			this->P0_D3->Click += gcnew System::EventHandler(this, &MyForm::P0_D3_Click);
			// 
			// P0_D4
			// 
			this->P0_D4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P0_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P0_D4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P0_D4->Location = System::Drawing::Point(12, 717);
			this->P0_D4->Name = L"P0_D4";
			this->P0_D4->Size = System::Drawing::Size(20, 22);
			this->P0_D4->TabIndex = 9;
			this->P0_D4->Text = L"4";
			this->P0_D4->UseVisualStyleBackColor = false;
			this->P0_D4->Click += gcnew System::EventHandler(this, &MyForm::P0_D4_Click);
			// 
			// P0_D2
			// 
			this->P0_D2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P0_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P0_D2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P0_D2->Location = System::Drawing::Point(12, 773);
			this->P0_D2->Name = L"P0_D2";
			this->P0_D2->Size = System::Drawing::Size(20, 22);
			this->P0_D2->TabIndex = 10;
			this->P0_D2->Text = L"2";
			this->P0_D2->UseVisualStyleBackColor = false;
			this->P0_D2->Click += gcnew System::EventHandler(this, &MyForm::P0_D2_Click);
			// 
			// P0_D1
			// 
			this->P0_D1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P0_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P0_D1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P0_D1->Location = System::Drawing::Point(12, 801);
			this->P0_D1->Name = L"P0_D1";
			this->P0_D1->Size = System::Drawing::Size(20, 22);
			this->P0_D1->TabIndex = 11;
			this->P0_D1->Text = L"1";
			this->P0_D1->UseVisualStyleBackColor = false;
			this->P0_D1->Click += gcnew System::EventHandler(this, &MyForm::P0_D1_Click);
			// 
			// P1_D0
			// 
			this->P1_D0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P1_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1_D0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P1_D0->Location = System::Drawing::Point(1327, 653);
			this->P1_D0->Name = L"P1_D0";
			this->P1_D0->Size = System::Drawing::Size(20, 22);
			this->P1_D0->TabIndex = 12;
			this->P1_D0->Text = L"0";
			this->P1_D0->UseVisualStyleBackColor = false;
			this->P1_D0->Click += gcnew System::EventHandler(this, &MyForm::P1_D0_Click);
			// 
			// P1_D2
			// 
			this->P1_D2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P1_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1_D2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P1_D2->Location = System::Drawing::Point(1327, 625);
			this->P1_D2->Name = L"P1_D2";
			this->P1_D2->Size = System::Drawing::Size(20, 22);
			this->P1_D2->TabIndex = 13;
			this->P1_D2->Text = L"2";
			this->P1_D2->UseVisualStyleBackColor = false;
			this->P1_D2->Click += gcnew System::EventHandler(this, &MyForm::P1_D2_Click);
			// 
			// P1_D3
			// 
			this->P1_D3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P1_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1_D3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P1_D3->Location = System::Drawing::Point(1327, 597);
			this->P1_D3->Name = L"P1_D3";
			this->P1_D3->Size = System::Drawing::Size(20, 22);
			this->P1_D3->TabIndex = 14;
			this->P1_D3->Text = L"3";
			this->P1_D3->UseVisualStyleBackColor = false;
			this->P1_D3->Click += gcnew System::EventHandler(this, &MyForm::P1_D3_Click);
			// 
			// P1_D4
			// 
			this->P1_D4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P1_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1_D4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P1_D4->Location = System::Drawing::Point(1327, 569);
			this->P1_D4->Name = L"P1_D4";
			this->P1_D4->Size = System::Drawing::Size(20, 22);
			this->P1_D4->TabIndex = 15;
			this->P1_D4->Text = L"4";
			this->P1_D4->UseVisualStyleBackColor = false;
			this->P1_D4->Click += gcnew System::EventHandler(this, &MyForm::P1_D4_Click);
			// 
			// P2_D1
			// 
			this->P2_D1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P2_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2_D1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P2_D1->Location = System::Drawing::Point(12, 475);
			this->P2_D1->Name = L"P2_D1";
			this->P2_D1->Size = System::Drawing::Size(20, 22);
			this->P2_D1->TabIndex = 17;
			this->P2_D1->Text = L"1";
			this->P2_D1->UseVisualStyleBackColor = false;
			this->P2_D1->Click += gcnew System::EventHandler(this, &MyForm::P2_D1_Click);
			// 
			// P2_D3
			// 
			this->P2_D3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P2_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2_D3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P2_D3->Location = System::Drawing::Point(12, 447);
			this->P2_D3->Name = L"P2_D3";
			this->P2_D3->Size = System::Drawing::Size(20, 22);
			this->P2_D3->TabIndex = 18;
			this->P2_D3->Text = L"3";
			this->P2_D3->UseVisualStyleBackColor = false;
			this->P2_D3->Click += gcnew System::EventHandler(this, &MyForm::P2_D3_Click);
			// 
			// P2_D4
			// 
			this->P2_D4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P2_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2_D4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P2_D4->Location = System::Drawing::Point(12, 419);
			this->P2_D4->Name = L"P2_D4";
			this->P2_D4->Size = System::Drawing::Size(20, 22);
			this->P2_D4->TabIndex = 19;
			this->P2_D4->Text = L"4";
			this->P2_D4->UseVisualStyleBackColor = false;
			this->P2_D4->Click += gcnew System::EventHandler(this, &MyForm::P2_D4_Click);
			// 
			// P3_D0
			// 
			this->P3_D0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P3_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P3_D0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P3_D0->Location = System::Drawing::Point(1327, 351);
			this->P3_D0->Name = L"P3_D0";
			this->P3_D0->Size = System::Drawing::Size(20, 22);
			this->P3_D0->TabIndex = 20;
			this->P3_D0->Text = L"0";
			this->P3_D0->UseVisualStyleBackColor = false;
			this->P3_D0->Click += gcnew System::EventHandler(this, &MyForm::P3_D0_Click);
			// 
			// P3_D1
			// 
			this->P3_D1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P3_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P3_D1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P3_D1->Location = System::Drawing::Point(1327, 323);
			this->P3_D1->Name = L"P3_D1";
			this->P3_D1->Size = System::Drawing::Size(20, 22);
			this->P3_D1->TabIndex = 21;
			this->P3_D1->Text = L"1";
			this->P3_D1->UseVisualStyleBackColor = false;
			this->P3_D1->Click += gcnew System::EventHandler(this, &MyForm::P3_D1_Click);
			// 
			// P3_D2
			// 
			this->P3_D2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P3_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P3_D2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P3_D2->Location = System::Drawing::Point(1327, 295);
			this->P3_D2->Name = L"P3_D2";
			this->P3_D2->Size = System::Drawing::Size(20, 22);
			this->P3_D2->TabIndex = 22;
			this->P3_D2->Text = L"2";
			this->P3_D2->UseVisualStyleBackColor = false;
			this->P3_D2->Click += gcnew System::EventHandler(this, &MyForm::P3_D2_Click);
			// 
			// P3_D4
			// 
			this->P3_D4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P3_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P3_D4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P3_D4->Location = System::Drawing::Point(1327, 267);
			this->P3_D4->Name = L"P3_D4";
			this->P3_D4->Size = System::Drawing::Size(20, 22);
			this->P3_D4->TabIndex = 23;
			this->P3_D4->Text = L"4";
			this->P3_D4->UseVisualStyleBackColor = false;
			this->P3_D4->Click += gcnew System::EventHandler(this, &MyForm::P3_D4_Click);
			// 
			// P4_D0
			// 
			this->P4_D0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P4_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P4_D0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P4_D0->Location = System::Drawing::Point(12, 200);
			this->P4_D0->Name = L"P4_D0";
			this->P4_D0->Size = System::Drawing::Size(20, 22);
			this->P4_D0->TabIndex = 24;
			this->P4_D0->Text = L"0";
			this->P4_D0->UseVisualStyleBackColor = false;
			this->P4_D0->Click += gcnew System::EventHandler(this, &MyForm::P4_D0_Click);
			// 
			// P4_D1
			// 
			this->P4_D1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P4_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P4_D1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P4_D1->Location = System::Drawing::Point(12, 172);
			this->P4_D1->Name = L"P4_D1";
			this->P4_D1->Size = System::Drawing::Size(20, 22);
			this->P4_D1->TabIndex = 25;
			this->P4_D1->Text = L"1";
			this->P4_D1->UseVisualStyleBackColor = false;
			this->P4_D1->Click += gcnew System::EventHandler(this, &MyForm::P4_D1_Click);
			// 
			// P4_D2
			// 
			this->P4_D2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P4_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P4_D2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P4_D2->Location = System::Drawing::Point(12, 144);
			this->P4_D2->Name = L"P4_D2";
			this->P4_D2->Size = System::Drawing::Size(20, 22);
			this->P4_D2->TabIndex = 26;
			this->P4_D2->Text = L"2";
			this->P4_D2->UseVisualStyleBackColor = false;
			this->P4_D2->Click += gcnew System::EventHandler(this, &MyForm::P4_D2_Click);
			// 
			// P4_D3
			// 
			this->P4_D3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P4_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P4_D3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P4_D3->Location = System::Drawing::Point(12, 116);
			this->P4_D3->Name = L"P4_D3";
			this->P4_D3->Size = System::Drawing::Size(20, 22);
			this->P4_D3->TabIndex = 27;
			this->P4_D3->Text = L"3";
			this->P4_D3->UseVisualStyleBackColor = false;
			this->P4_D3->Click += gcnew System::EventHandler(this, &MyForm::P4_D3_Click);
			// 
			// P2_D0
			// 
			this->P2_D0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P2_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2_D0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P2_D0->Location = System::Drawing::Point(12, 503);
			this->P2_D0->Name = L"P2_D0";
			this->P2_D0->Size = System::Drawing::Size(20, 22);
			this->P2_D0->TabIndex = 16;
			this->P2_D0->Text = L"0";
			this->P2_D0->UseVisualStyleBackColor = false;
			this->P2_D0->Click += gcnew System::EventHandler(this, &MyForm::P2_D0_Click);
			// 
			// T0_D1
			// 
			this->T0_D1->BackColor = System::Drawing::Color::Silver;
			this->T0_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T0_D1->Location = System::Drawing::Point(103, 757);
			this->T0_D1->Name = L"T0_D1";
			this->T0_D1->Size = System::Drawing::Size(45, 26);
			this->T0_D1->TabIndex = 30;
			this->T0_D1->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1022, 237);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 31);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Ilość Ludzi";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(127, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 31);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Ilość Ludzi";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(127, 390);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 31);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Ilość Ludzi";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1022, 537);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 31);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Ilość Ludzi";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(117, 684);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 31);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Ilość Ludzi";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(930, 578);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 24);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Piętro";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(49, 730);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 24);
			this->label7->TabIndex = 38;
			this->label7->Text = L"Piętro";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(941, 279);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 24);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Piętro";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(49, 444);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 24);
			this->label9->TabIndex = 40;
			this->label9->Text = L"Piętro";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(49, 116);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 24);
			this->label10->TabIndex = 41;
			this->label10->Text = L"Piętro";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(1024, 578);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 24);
			this->label11->TabIndex = 42;
			this->label11->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(119, 445);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 24);
			this->label12->TabIndex = 43;
			this->label12->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(1024, 279);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 24);
			this->label13->TabIndex = 44;
			this->label13->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(119, 116);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 24);
			this->label14->TabIndex = 45;
			this->label14->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(1086, 279);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 24);
			this->label15->TabIndex = 46;
			this->label15->Text = L"1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(119, 730);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 24);
			this->label16->TabIndex = 47;
			this->label16->Text = L"1";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(179, 447);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 24);
			this->label17->TabIndex = 48;
			this->label17->Text = L"1";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(179, 116);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(20, 24);
			this->label18->TabIndex = 49;
			this->label18->Text = L"1";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(179, 730);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(20, 24);
			this->label19->TabIndex = 50;
			this->label19->Text = L"2";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(1086, 578);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(20, 24);
			this->label20->TabIndex = 51;
			this->label20->Text = L"2";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(1145, 279);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(20, 24);
			this->label21->TabIndex = 52;
			this->label21->Text = L"2";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(240, 116);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(20, 24);
			this->label22->TabIndex = 53;
			this->label22->Text = L"2";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(1145, 578);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(20, 24);
			this->label23->TabIndex = 54;
			this->label23->Text = L"3";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(240, 730);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(20, 24);
			this->label24->TabIndex = 55;
			this->label24->Text = L"3";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(240, 447);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(20, 24);
			this->label25->TabIndex = 56;
			this->label25->Text = L"3";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(308, 116);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(20, 24);
			this->label26->TabIndex = 57;
			this->label26->Text = L"3";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(1211, 279);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(20, 24);
			this->label27->TabIndex = 58;
			this->label27->Text = L"4";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(308, 444);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(20, 24);
			this->label28->TabIndex = 59;
			this->label28->Text = L"4";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(1211, 578);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(20, 24);
			this->label29->TabIndex = 60;
			this->label29->Text = L"4";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(308, 730);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(20, 24);
			this->label30->TabIndex = 61;
			this->label30->Text = L"4";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(572, 695);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(143, 31);
			this->label31->TabIndex = 62;
			this->label31->Text = L"Ilość Ludzi";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(501, 759);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(58, 24);
			this->label32->TabIndex = 63;
			this->label32->Text = L"Piętro";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(565, 757);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(20, 24);
			this->label33->TabIndex = 64;
			this->label33->Text = L"0";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(624, 757);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(20, 24);
			this->label34->TabIndex = 65;
			this->label34->Text = L"1";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(695, 757);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(20, 24);
			this->label35->TabIndex = 66;
			this->label35->Text = L"2";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(760, 757);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(20, 24);
			this->label36->TabIndex = 67;
			this->label36->Text = L"3";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(826, 757);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(20, 24);
			this->label37->TabIndex = 68;
			this->label37->Text = L"4";
			// 
			// T0_D2
			// 
			this->T0_D2->BackColor = System::Drawing::Color::Silver;
			this->T0_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T0_D2->Location = System::Drawing::Point(165, 757);
			this->T0_D2->Name = L"T0_D2";
			this->T0_D2->Size = System::Drawing::Size(45, 26);
			this->T0_D2->TabIndex = 70;
			this->T0_D2->Text = L"0";
			// 
			// T0_D3
			// 
			this->T0_D3->BackColor = System::Drawing::Color::Silver;
			this->T0_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T0_D3->Location = System::Drawing::Point(225, 757);
			this->T0_D3->Name = L"T0_D3";
			this->T0_D3->Size = System::Drawing::Size(45, 26);
			this->T0_D3->TabIndex = 71;
			this->T0_D3->Text = L"0";
			// 
			// T0_D4
			// 
			this->T0_D4->BackColor = System::Drawing::Color::Silver;
			this->T0_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T0_D4->Location = System::Drawing::Point(293, 757);
			this->T0_D4->Name = L"T0_D4";
			this->T0_D4->Size = System::Drawing::Size(45, 26);
			this->T0_D4->TabIndex = 72;
			this->T0_D4->Text = L"0";
			// 
			// T1_D0
			// 
			this->T1_D0->BackColor = System::Drawing::Color::Silver;
			this->T1_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1_D0->Location = System::Drawing::Point(1010, 605);
			this->T1_D0->Name = L"T1_D0";
			this->T1_D0->Size = System::Drawing::Size(45, 26);
			this->T1_D0->TabIndex = 73;
			this->T1_D0->Text = L"0";
			// 
			// T1_D2
			// 
			this->T1_D2->BackColor = System::Drawing::Color::Silver;
			this->T1_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1_D2->Location = System::Drawing::Point(1075, 605);
			this->T1_D2->Name = L"T1_D2";
			this->T1_D2->Size = System::Drawing::Size(45, 26);
			this->T1_D2->TabIndex = 74;
			this->T1_D2->Text = L"0";
			// 
			// T1_D3
			// 
			this->T1_D3->BackColor = System::Drawing::Color::Silver;
			this->T1_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1_D3->Location = System::Drawing::Point(1135, 605);
			this->T1_D3->Name = L"T1_D3";
			this->T1_D3->Size = System::Drawing::Size(45, 26);
			this->T1_D3->TabIndex = 75;
			this->T1_D3->Text = L"0";
			// 
			// T1_D4
			// 
			this->T1_D4->BackColor = System::Drawing::Color::Silver;
			this->T1_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1_D4->Location = System::Drawing::Point(1198, 605);
			this->T1_D4->Name = L"T1_D4";
			this->T1_D4->Size = System::Drawing::Size(45, 26);
			this->T1_D4->TabIndex = 76;
			this->T1_D4->Text = L"0";
			// 
			// T2_D0
			// 
			this->T2_D0->BackColor = System::Drawing::Color::Silver;
			this->T2_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2_D0->Location = System::Drawing::Point(103, 475);
			this->T2_D0->Name = L"T2_D0";
			this->T2_D0->Size = System::Drawing::Size(45, 26);
			this->T2_D0->TabIndex = 77;
			this->T2_D0->Text = L"0";
			// 
			// T2_D1
			// 
			this->T2_D1->BackColor = System::Drawing::Color::Silver;
			this->T2_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2_D1->Location = System::Drawing::Point(165, 475);
			this->T2_D1->Name = L"T2_D1";
			this->T2_D1->Size = System::Drawing::Size(45, 26);
			this->T2_D1->TabIndex = 78;
			this->T2_D1->Text = L"0";
			// 
			// T2_D3
			// 
			this->T2_D3->BackColor = System::Drawing::Color::Silver;
			this->T2_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2_D3->Location = System::Drawing::Point(225, 475);
			this->T2_D3->Name = L"T2_D3";
			this->T2_D3->Size = System::Drawing::Size(45, 26);
			this->T2_D3->TabIndex = 79;
			this->T2_D3->Text = L"0";
			// 
			// T2_D4
			// 
			this->T2_D4->BackColor = System::Drawing::Color::Silver;
			this->T2_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2_D4->Location = System::Drawing::Point(293, 475);
			this->T2_D4->Name = L"T2_D4";
			this->T2_D4->Size = System::Drawing::Size(45, 26);
			this->T2_D4->TabIndex = 80;
			this->T2_D4->Text = L"0";
			// 
			// T3_D0
			// 
			this->T3_D0->BackColor = System::Drawing::Color::Silver;
			this->T3_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3_D0->Location = System::Drawing::Point(1010, 306);
			this->T3_D0->Name = L"T3_D0";
			this->T3_D0->Size = System::Drawing::Size(45, 26);
			this->T3_D0->TabIndex = 81;
			this->T3_D0->Text = L"0";
			// 
			// T3_D1
			// 
			this->T3_D1->BackColor = System::Drawing::Color::Silver;
			this->T3_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3_D1->Location = System::Drawing::Point(1075, 306);
			this->T3_D1->Name = L"T3_D1";
			this->T3_D1->Size = System::Drawing::Size(45, 26);
			this->T3_D1->TabIndex = 82;
			this->T3_D1->Text = L"0";
			// 
			// T3_D2
			// 
			this->T3_D2->BackColor = System::Drawing::Color::Silver;
			this->T3_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3_D2->Location = System::Drawing::Point(1135, 306);
			this->T3_D2->Name = L"T3_D2";
			this->T3_D2->Size = System::Drawing::Size(45, 26);
			this->T3_D2->TabIndex = 83;
			this->T3_D2->Text = L"0";
			// 
			// T3_D4
			// 
			this->T3_D4->BackColor = System::Drawing::Color::Silver;
			this->T3_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3_D4->Location = System::Drawing::Point(1198, 306);
			this->T3_D4->Name = L"T3_D4";
			this->T3_D4->Size = System::Drawing::Size(45, 26);
			this->T3_D4->TabIndex = 84;
			this->T3_D4->Text = L"0";
			// 
			// T4_D0
			// 
			this->T4_D0->BackColor = System::Drawing::Color::Silver;
			this->T4_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_D0->Location = System::Drawing::Point(103, 144);
			this->T4_D0->Name = L"T4_D0";
			this->T4_D0->Size = System::Drawing::Size(45, 26);
			this->T4_D0->TabIndex = 85;
			this->T4_D0->Text = L"0";
			// 
			// T4_D1
			// 
			this->T4_D1->BackColor = System::Drawing::Color::Silver;
			this->T4_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_D1->Location = System::Drawing::Point(165, 144);
			this->T4_D1->Name = L"T4_D1";
			this->T4_D1->Size = System::Drawing::Size(45, 26);
			this->T4_D1->TabIndex = 86;
			this->T4_D1->Text = L"0";
			// 
			// T4_D2
			// 
			this->T4_D2->BackColor = System::Drawing::Color::Silver;
			this->T4_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_D2->Location = System::Drawing::Point(225, 144);
			this->T4_D2->Name = L"T4_D2";
			this->T4_D2->Size = System::Drawing::Size(45, 26);
			this->T4_D2->TabIndex = 87;
			this->T4_D2->Text = L"0";
			// 
			// T4_D3
			// 
			this->T4_D3->BackColor = System::Drawing::Color::Silver;
			this->T4_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_D3->Location = System::Drawing::Point(293, 144);
			this->T4_D3->Name = L"T4_D3";
			this->T4_D3->Size = System::Drawing::Size(45, 26);
			this->T4_D3->TabIndex = 88;
			this->T4_D3->Text = L"0";
			// 
			// TW_D0
			// 
			this->TW_D0->BackColor = System::Drawing::Color::Silver;
			this->TW_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TW_D0->Location = System::Drawing::Point(553, 797);
			this->TW_D0->Name = L"TW_D0";
			this->TW_D0->Size = System::Drawing::Size(45, 26);
			this->TW_D0->TabIndex = 89;
			this->TW_D0->Text = L"0";
			// 
			// TW_D1
			// 
			this->TW_D1->BackColor = System::Drawing::Color::Silver;
			this->TW_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TW_D1->Location = System::Drawing::Point(613, 797);
			this->TW_D1->Name = L"TW_D1";
			this->TW_D1->Size = System::Drawing::Size(45, 26);
			this->TW_D1->TabIndex = 90;
			this->TW_D1->Text = L"0";
			// 
			// TW_D2
			// 
			this->TW_D2->BackColor = System::Drawing::Color::Silver;
			this->TW_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TW_D2->Location = System::Drawing::Point(683, 797);
			this->TW_D2->Name = L"TW_D2";
			this->TW_D2->Size = System::Drawing::Size(45, 26);
			this->TW_D2->TabIndex = 91;
			this->TW_D2->Text = L"0";
			// 
			// TW_D3
			// 
			this->TW_D3->BackColor = System::Drawing::Color::Silver;
			this->TW_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TW_D3->Location = System::Drawing::Point(747, 797);
			this->TW_D3->Name = L"TW_D3";
			this->TW_D3->Size = System::Drawing::Size(45, 26);
			this->TW_D3->TabIndex = 92;
			this->TW_D3->Text = L"0";
			// 
			// TW_D4
			// 
			this->TW_D4->BackColor = System::Drawing::Color::Silver;
			this->TW_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TW_D4->Location = System::Drawing::Point(816, 797);
			this->TW_D4->Name = L"TW_D4";
			this->TW_D4->Size = System::Drawing::Size(45, 26);
			this->TW_D4->TabIndex = 93;
			this->TW_D4->Text = L"0";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(266, 691);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(89, 24);
			this->label38->TabIndex = 94;
			this->label38->Text = L"W sumie:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(1171, 544);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(89, 24);
			this->label39->TabIndex = 95;
			this->label39->Text = L"W sumie:";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(1171, 244);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(89, 24);
			this->label40->TabIndex = 96;
			this->label40->Text = L"W sumie:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(276, 397);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(89, 24);
			this->label41->TabIndex = 97;
			this->label41->Text = L"W sumie:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(276, 87);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(89, 24);
			this->label42->TabIndex = 98;
			this->label42->Text = L"W sumie:";
			// 
			// T4_S
			// 
			this->T4_S->BackColor = System::Drawing::Color::Silver;
			this->T4_S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_S->Location = System::Drawing::Point(371, 87);
			this->T4_S->Name = L"T4_S";
			this->T4_S->Size = System::Drawing::Size(45, 26);
			this->T4_S->TabIndex = 99;
			this->T4_S->Text = L"0";
			// 
			// T3_S
			// 
			this->T3_S->BackColor = System::Drawing::Color::Silver;
			this->T3_S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3_S->Location = System::Drawing::Point(1266, 244);
			this->T3_S->Name = L"T3_S";
			this->T3_S->Size = System::Drawing::Size(45, 26);
			this->T3_S->TabIndex = 100;
			this->T3_S->Text = L"0";
			// 
			// T2_S
			// 
			this->T2_S->BackColor = System::Drawing::Color::Silver;
			this->T2_S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2_S->Location = System::Drawing::Point(371, 397);
			this->T2_S->Name = L"T2_S";
			this->T2_S->Size = System::Drawing::Size(45, 26);
			this->T2_S->TabIndex = 101;
			this->T2_S->Text = L"0";
			// 
			// T1_S
			// 
			this->T1_S->BackColor = System::Drawing::Color::Silver;
			this->T1_S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1_S->Location = System::Drawing::Point(1266, 544);
			this->T1_S->Name = L"T1_S";
			this->T1_S->Size = System::Drawing::Size(45, 26);
			this->T1_S->TabIndex = 102;
			this->T1_S->Text = L"0";
			// 
			// T0_S
			// 
			this->T0_S->BackColor = System::Drawing::Color::Silver;
			this->T0_S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T0_S->Location = System::Drawing::Point(361, 691);
			this->T0_S->Name = L"T0_S";
			this->T0_S->Size = System::Drawing::Size(45, 26);
			this->T0_S->TabIndex = 103;
			this->T0_S->Text = L"0";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(721, 702);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(89, 24);
			this->label43->TabIndex = 104;
			this->label43->Text = L"W sumie:";
			// 
			// TW_S
			// 
			this->TW_S->BackColor = System::Drawing::Color::Silver;
			this->TW_S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TW_S->Location = System::Drawing::Point(816, 702);
			this->TW_S->Name = L"TW_S";
			this->TW_S->Size = System::Drawing::Size(45, 26);
			this->TW_S->TabIndex = 105;
			this->TW_S->Text = L"0";
			// 
			// Z_Powrot
			// 
			this->Z_Powrot->Interval = 5000;
			this->Z_Powrot->Tick += gcnew System::EventHandler(this, &MyForm::Z_Powrot_Tick);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(743, 730);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(60, 24);
			this->label44->TabIndex = 106;
			this->label44->Text = L"Masa:";
			// 
			// TW_M
			// 
			this->TW_M->BackColor = System::Drawing::Color::Silver;
			this->TW_M->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TW_M->Location = System::Drawing::Point(816, 728);
			this->TW_M->Name = L"TW_M";
			this->TW_M->Size = System::Drawing::Size(45, 26);
			this->TW_M->TabIndex = 107;
			this->TW_M->Text = L"0";
			// 
			// Z_Pow_Winda
			// 
			this->Z_Pow_Winda->Interval = 15;
			this->Z_Pow_Winda->Tick += gcnew System::EventHandler(this, &MyForm::Z_Pow_Winda_Tick);
			// 
			// B_Start
			// 
			this->B_Start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->B_Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B_Start->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->B_Start->Location = System::Drawing::Point(959, 757);
			this->B_Start->Name = L"B_Start";
			this->B_Start->Size = System::Drawing::Size(147, 53);
			this->B_Start->TabIndex = 108;
			this->B_Start->Text = L"Start";
			this->B_Start->UseVisualStyleBackColor = false;
			this->B_Start->Click += gcnew System::EventHandler(this, &MyForm::B_Start_Click);
			// 
			// Timer
			// 
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &MyForm::Timer_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1800, 1000);
			this->Controls->Add(this->B_Start);
			this->Controls->Add(this->TW_M);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->TW_S);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->T0_S);
			this->Controls->Add(this->T1_S);
			this->Controls->Add(this->T2_S);
			this->Controls->Add(this->T3_S);
			this->Controls->Add(this->T4_S);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->TW_D4);
			this->Controls->Add(this->TW_D3);
			this->Controls->Add(this->TW_D2);
			this->Controls->Add(this->TW_D1);
			this->Controls->Add(this->TW_D0);
			this->Controls->Add(this->T4_D3);
			this->Controls->Add(this->T4_D2);
			this->Controls->Add(this->T4_D1);
			this->Controls->Add(this->T4_D0);
			this->Controls->Add(this->T3_D4);
			this->Controls->Add(this->T3_D2);
			this->Controls->Add(this->T3_D1);
			this->Controls->Add(this->T3_D0);
			this->Controls->Add(this->T2_D4);
			this->Controls->Add(this->T2_D3);
			this->Controls->Add(this->T2_D1);
			this->Controls->Add(this->T2_D0);
			this->Controls->Add(this->T1_D4);
			this->Controls->Add(this->T1_D3);
			this->Controls->Add(this->T1_D2);
			this->Controls->Add(this->T1_D0);
			this->Controls->Add(this->T0_D4);
			this->Controls->Add(this->T0_D3);
			this->Controls->Add(this->T0_D2);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->T0_D1);
			this->Controls->Add(this->P4_D3);
			this->Controls->Add(this->P4_D2);
			this->Controls->Add(this->P4_D1);
			this->Controls->Add(this->P4_D0);
			this->Controls->Add(this->P3_D4);
			this->Controls->Add(this->P3_D2);
			this->Controls->Add(this->P3_D1);
			this->Controls->Add(this->P3_D0);
			this->Controls->Add(this->P2_D4);
			this->Controls->Add(this->P2_D3);
			this->Controls->Add(this->P2_D1);
			this->Controls->Add(this->P2_D0);
			this->Controls->Add(this->P1_D4);
			this->Controls->Add(this->P1_D3);
			this->Controls->Add(this->P1_D2);
			this->Controls->Add(this->P1_D0);
			this->Controls->Add(this->P0_D1);
			this->Controls->Add(this->P0_D2);
			this->Controls->Add(this->P0_D4);
			this->Controls->Add(this->P0_D3);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Winda);
			this->Controls->Add(this->Szyb);
			this->Controls->Add(this->N_Winda);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Szyb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Winda))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
		String^ a;
		int x = 0;
		int pietro = 0;
		int licznik_ludzi = 0;
		int licznik_pas = 0;
		int czas_winda = 0;
		int czas_wejscie = 0;
		int kier_winda = 1;
		int blokada = 0;
		int blokada2 = 1;
		int paserzerowie = 0;
		

	private:	void Jazda() {
		if (kier_winda == 0)
		{
			this->Winda->Top += -1;
			this->label31->Top += -1;
			this->label43->Top += -1;
			this->label32->Top += -1;
			this->label33->Top += -1;
			this->label34->Top += -1;
			this->label35->Top += -1;
			this->label36->Top += -1;
			this->label37->Top += -1;
			this->label44->Top += -1;
			this->TW_S->Top += -1;
			this->TW_M->Top += -1;
			this->TW_D0->Top += -1;
			this->TW_D1->Top += -1;
			this->TW_D2->Top += -1;
			this->TW_D3->Top += -1;
			this->TW_D4->Top += -1;
		}
		if (kier_winda == 1)
		{
			this->Winda->Top += 1;
			this->label31->Top += 1;
			this->label43->Top += 1;
			this->label32->Top += 1;
			this->label33->Top += 1;
			this->label34->Top += 1;
			this->label35->Top += 1;
			this->label36->Top += 1;
			this->label37->Top += 1;
			this->label44->Top += 1;
			this->TW_S->Top += 1;
			this->TW_M->Top += 1;
			this->TW_D0->Top += 1;
			this->TW_D1->Top += 1;
			this->TW_D2->Top += 1;
			this->TW_D3->Top += 1;
			this->TW_D4->Top += 1;
		}
		if (czas_winda == 150)
		{
			if (kier_winda == 0)pietro++;
			if (kier_winda == 1)pietro--;
			this->Z_Winda->Stop();
			czas_winda = 0;
			blokada --;
			Wejscie();
			Wyjscie();
			Sterowanie();
		};
	}
	private:	void Sterowanie()
	{	
		if (!Kolejka.empty()) {
			
			this->Timer->Stop();

			if (paserzerowie == 0)
			{
				if (pietro < Kolejka[0].skad) {
					if (blokada == 0) {
						kier_winda = 0;
						blokada = 1;
						this->Z_Winda->Start();
					}
				}
				if (pietro > Kolejka[0].skad) {
					if (blokada == 0) {
						kier_winda = 1;
						blokada = 1;
						this->Z_Winda->Start();
					}
				}
				if (pietro == Kolejka[0].skad) {
					Wejscie();
					Wyjscie();
					Sterowanie();
				}
			}
		}
			if (!Win.empty() && paserzerowie > 0)
			{	
				if (pietro < Win[0].dokad) {
					if (blokada == 0) {
						kier_winda = 0;
						blokada = 1;
						this->Z_Winda->Start();
					}
				}
				if (pietro > Win[0].dokad) {
					if (blokada == 0) {
						kier_winda = 1;
						blokada = 1;
						this->Z_Winda->Start();
					}
				}
			}
		if (Win.empty() && Kolejka.empty() && blokada2 == 0) {	
			blokada2 = 1;
			this->Z_Powrot->Start();
		}

	}
	private:	void Wejscie()
	{
		int rozmiar = Kolejka.size();
		for (int i = 0; i < rozmiar ; i++)
		{
			if (Win.empty() && Kolejka[i].skad==pietro)
			{
				Win.push_back(Kolejka[i]);
				paserzerowie++;
				Przesiadki(i);
				Wpis_winda(i);
				Kolejka.erase(Kolejka.begin() + i);
				blokada2 = 0;
				rozmiar = Kolejka.size();
				i--;
			}
			
			else if (Kolejka[i].skad == pietro && paserzerowie<8 &&((Kolejka[i].dokad<=Win[0].dokad && Kolejka[i].dokad > pietro) ||( Kolejka[i].dokad >= Win[0].dokad && Kolejka[i].dokad < pietro)))
			{
				Win.push_back(Kolejka[i]);
				paserzerowie++;
				Przesiadki(i);
				Wpis_winda(i);
				Kolejka.erase(Kolejka.begin() + i);
				blokada2 = 0;
				rozmiar = Kolejka.size();
				i--;
			}
		}
	}
	private:	void Wpis_winda(int i)
	{
		TW_S->Text = Convert::ToString(paserzerowie);
		TW_M->Text = Convert::ToString(paserzerowie*70);
		
		if (Kolejka[i].dokad == 0)
		{
			int i = Convert::ToInt32(TW_D0->Text);
			i++;
			TW_D0->Text = Convert::ToString(i);
		}
		if (Kolejka[i].dokad == 1)
		{
			int i = Convert::ToInt32(TW_D1->Text);
			i++;
			TW_D1->Text = Convert::ToString(i);
		}
		if (Kolejka[i].dokad == 2)
		{
			int i = Convert::ToInt32(TW_D2->Text);
			i++;
			TW_D2->Text = Convert::ToString(i);
		}
		if (Kolejka[i].dokad == 3)
		{
			int i = Convert::ToInt32(TW_D3->Text);
			i++;
			TW_D3->Text = Convert::ToString(i);
		}
		if (Kolejka[i].dokad == 4)
		{
			int i = Convert::ToInt32(TW_D4->Text);
			i++;
			TW_D4->Text = Convert::ToString(i);
		}
		
	}
	private:	void Wyjscie(){
		int rozmiar = Win.size();
		for (int i = 0; i < rozmiar; i++){
			if (Win[i].dokad == pietro){
				paserzerowie--;
				TW_S->Text = Convert::ToString(paserzerowie);
				TW_M->Text = Convert::ToString(paserzerowie * 70);
				if (Win[i].dokad == 0)
				{
					int i = Convert::ToInt32(TW_D0->Text);
					i--;
					TW_D0->Text = Convert::ToString(i);
				}
				if (Win[i].dokad == 1)
				{
					int i = Convert::ToInt32(TW_D1->Text);
					i--;
					TW_D1->Text = Convert::ToString(i);
				}
				if (Win[i].dokad == 2)
				{
					int i = Convert::ToInt32(TW_D2->Text);
					i--;
					TW_D2->Text = Convert::ToString(i);
				}
				if (Win[i].dokad == 3)
				{
					int i = Convert::ToInt32(TW_D3->Text);
					i--;
					TW_D3->Text = Convert::ToString(i);
				}
				if (Win[i].dokad == 4)
				{
					int i = Convert::ToInt32(TW_D4->Text);
					i--;
					TW_D4->Text = Convert::ToString(i);
				}
				Win.erase(Win.begin() + i);
				if (Win.empty() && Kolejka.empty())
				{
					this->Timer->Start();
				}
				rozmiar--;
				i--;
			}
		
		};
	}
	private:	void Przesiadki(int i) {
		if (pietro == 0)
		{
			int a = Convert::ToInt32(T0_S->Text);
			a--;
			T0_S->Text = Convert::ToString(a);

			if (Kolejka[i].dokad == 1)
			{
				int a = Convert::ToInt32(T0_D1->Text);
				a--;
				T0_D1->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 2)
			{
				int a = Convert::ToInt32(T0_D2->Text);
				a--;
				T0_D2->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 3)
			{
				int a = Convert::ToInt32(T0_D3->Text);
				a--;
				T0_D3->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 4)
			{
				int a = Convert::ToInt32(T0_D4->Text);
				a--;
				T0_D4->Text = Convert::ToString(a);
			}
		}

		if (pietro == 1)
		{
			int a = Convert::ToInt32(T1_S->Text);
			a--;
			T1_S->Text = Convert::ToString(a);

			if (Kolejka[i].dokad == 0)
			{
				int a = Convert::ToInt32(T1_D0->Text);
				a--;
				T1_D0->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 2)
			{
				int a = Convert::ToInt32(T1_D2->Text);
				a--;
				T1_D2->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 3)
			{
				int a = Convert::ToInt32(T1_D3->Text);
				a--;
				T1_D3->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 4)
			{
				int a = Convert::ToInt32(T1_D4->Text);
				a--;
				T1_D4->Text = Convert::ToString(a);
			}
		}

		if (pietro == 2)
		{
			int a = Convert::ToInt32(T2_S->Text);
			a--;
			T2_S->Text = Convert::ToString(a);

			if (Kolejka[i].dokad == 0)
			{
				int a = Convert::ToInt32(T2_D0->Text);
				a--;
				T2_D0->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 1)
			{
				int a = Convert::ToInt32(T2_D1->Text);
				a--;
				T2_D1->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 3)
			{
				int a = Convert::ToInt32(T2_D3->Text);
				a--;
				T2_D3->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 4)
			{
				int a = Convert::ToInt32(T2_D4->Text);
				a--;
				T2_D4->Text = Convert::ToString(a);
			}
		}

		if (pietro == 3)
		{
			int a = Convert::ToInt32(T3_S->Text);
			a--;
			T3_S->Text = Convert::ToString(a);

			if (Kolejka[i].dokad == 0)
			{
				int a = Convert::ToInt32(T3_D0->Text);
				a--;
				T3_D0->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 1)
			{
				int a = Convert::ToInt32(T3_D1->Text);
				a--;
				T3_D1->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 2)
			{
				int a = Convert::ToInt32(T3_D2->Text);
				a--;
				T3_D2->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 4)
			{
				int a = Convert::ToInt32(T3_D4->Text);
				a--;
				T3_D4->Text = Convert::ToString(a);
			}
		}

		if (pietro == 4)
		{
			int a = Convert::ToInt32(T4_S->Text);
			a--;
			T4_S->Text = Convert::ToString(a);

			if (Kolejka[i].dokad == 0)
			{
				int a = Convert::ToInt32(T4_D0->Text);
				a--;
				T4_D0->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 1)
			{
				int a = Convert::ToInt32(T4_D1->Text);
				a--;
				T4_D1->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 2)
			{
				int a = Convert::ToInt32(T4_D2->Text);
				a--;
				T4_D2->Text = Convert::ToString(a);
			}
			if (Kolejka[i].dokad == 3)
			{
				int a = Convert::ToInt32(T4_D3->Text);
				a--;
				T4_D3->Text = Convert::ToString(a);
			}
		}
	}
	private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void P0_D1_Click(System::Object^  sender, System::EventArgs^  e) {
		Czlowiek c;
		c.skad = 0;
		c.dokad = 1;
		Kolejka.push_back(c);

		String ^ s = T0_D1->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T0_D1->Text = s;

		String ^ ss = T0_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T0_S->Text = ss;
	}
	private: System::Void P0_D2_Click(System::Object^  sender, System::EventArgs^  e) {
		Czlowiek c;
		c.skad = 0;
		c.dokad = 2;
		Kolejka.push_back(c);

		String ^ s = T0_D2->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T0_D2->Text = s;

		String ^ ss = T0_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T0_S->Text = ss;
	}
	private: System::Void P0_D3_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 0;
		c.dokad = 3;
		Kolejka.push_back(c);

		String ^ s = T0_D3->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T0_D3->Text = s;

		String ^ ss = T0_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T0_S->Text = ss;
	}
	private: System::Void P0_D4_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 0;
		c.dokad = 4;
		Kolejka.push_back(c);

		String ^ s = T0_D4->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T0_D4->Text = s;

		String ^ ss = T0_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T0_S->Text = ss;
	}
	private: System::Void P1_D0_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 1;
		c.dokad = 0;
		Kolejka.push_back(c);

		String ^ s = T1_D0->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T1_D0->Text = s;

		String ^ ss = T1_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T1_S->Text = ss;
	}
	private: System::Void P1_D2_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 1;
		c.dokad = 2;
		Kolejka.push_back(c);

		String ^ s = T1_D2->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T1_D2->Text = s;

		String ^ ss = T1_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T1_S->Text = ss;
	}
	private: System::Void P1_D3_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 1;
		c.dokad = 3;
		Kolejka.push_back(c);

		String ^ s = T1_D3->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T1_D3->Text = s;

		String ^ ss = T1_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T1_S->Text = ss;
	}
	private: System::Void P1_D4_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 1;
		c.dokad = 4;
		Kolejka.push_back(c);

		String ^ s = T1_D4->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T1_D4->Text = s;

		String ^ ss = T1_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T1_S->Text = ss;
	}
	private: System::Void P2_D0_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 2;
		c.dokad = 0;
		Kolejka.push_back(c);

		String ^ s = T2_D0->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T2_D0->Text = s;

		String ^ ss = T2_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T2_S->Text = ss;
	}
	private: System::Void P2_D1_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 2;
		c.dokad = 1;
		Kolejka.push_back(c);

		String ^ s = T2_D1->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T2_D1->Text = s;

		String ^ ss = T2_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T2_S->Text = ss;
	}
	private: System::Void P2_D3_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 2;
		c.dokad = 3;
		Kolejka.push_back(c);

		String ^ s = T2_D3->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T2_D3->Text = s;

		String ^ ss = T2_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T2_S->Text = ss;
	}
	private: System::Void P2_D4_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 2;
		c.dokad = 4;
		Kolejka.push_back(c);

		String ^ s = T2_D4->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T2_D4->Text = s;

		String ^ ss = T2_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T2_S->Text = ss;
	}
	private: System::Void P3_D0_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 3;
		c.dokad = 0;
		Kolejka.push_back(c);

		String ^ s = T3_D0->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T3_D0->Text = s;

		String ^ ss = T3_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T3_S->Text = ss;
	}
	private: System::Void P3_D1_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 3;
		c.dokad = 1;
		Kolejka.push_back(c);

		String ^ s = T3_D1->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T3_D1->Text = s;

		String ^ ss = T3_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T3_S->Text = ss;
	}
	private: System::Void P3_D2_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 3;
		c.dokad = 2;
		Kolejka.push_back(c);

		String ^ s = T3_D2->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T3_D2->Text = s;

		String ^ ss = T3_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T3_S->Text = ss;
	}
	private: System::Void P3_D4_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 3;
		c.dokad = 4;
		Kolejka.push_back(c);

		String ^ s = T3_D4->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T3_D4->Text = s;

		String ^ ss = T3_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T3_S->Text = ss;
	}
	private: System::Void P4_D0_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 4;
		c.dokad = 0;
		Kolejka.push_back(c);

		String ^ s = T4_D0->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T4_D0->Text = s;

		String ^ ss = T4_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T4_S->Text = ss;
	}
	private: System::Void P4_D1_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 4;
		c.dokad = 1;
		Kolejka.push_back(c);

		String ^ s = T4_D1->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T4_D1->Text = s;

		String ^ ss = T4_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T4_S->Text = ss;
	}
	private: System::Void P4_D2_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 4;
		c.dokad = 2;
		Kolejka.push_back(c);

		String ^ s = T4_D2->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T4_D2->Text = s;

		String ^ ss = T4_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T4_S->Text = ss;
	}
	private: System::Void P4_D3_Click(System::Object^  sender, System::EventArgs^  e) {

		Czlowiek c;
		c.skad = 4;
		c.dokad = 3;
		Kolejka.push_back(c);

		String ^ s = T4_D3->Text;
		int i = Convert::ToInt32(s);
		i++;
		s = Convert::ToString(i);
		T4_D3->Text = s;

		String ^ ss = T4_S->Text;
		int ii = Convert::ToInt32(ss);
		ii++;
		ss = Convert::ToString(ii);
		T4_S->Text = ss;
	}
	private: System::Void Z_Powrot_Tick(System::Object^  sender, System::EventArgs^  e) {
		blokada = pietro;
		this->Z_Pow_Winda->Start();
		this->Z_Powrot->Stop();
	}
	private: System::Void Z_Pow_Winda_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (blokada != 0)
		{
			kier_winda = 1;
			this->Z_Winda->Start();
		}
		if (blokada == 0)
		{
			this->Z_Pow_Winda->Stop();
		}
	}
	private: System::Void Z_Winda_Tick(System::Object^  sender, System::EventArgs^  e) {
		czas_winda++;
		Jazda();
	}
	private: System::Void B_Start_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Timer->Start();

}
	private: System::Void Timer_Tick(System::Object^  sender, System::EventArgs^  e) {
	Sterowanie();
}

};
}