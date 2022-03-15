#pragma once
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include<time.h>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <stdlib.h> 
#include <cstdlib>


namespace individualTereshenok {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btn_generate;




	private: System::Windows::Forms::Label^ sortedArr_lbl;
	private: System::Windows::Forms::TextBox^ sortedArr;



	private: System::Windows::Forms::Button^ btn_run;


	private: System::Windows::Forms::Label^ inputArr_lbl;

	private: System::Windows::Forms::TextBox^ inputArr;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtMinNumber;
	private: System::Windows::Forms::TextBox^ txtMaxNumber;


	private: System::Windows::Forms::TextBox^ txtArraySize;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ inputN;

	private: System::Windows::Forms::Button^ build_matrix;
	private: System::Windows::Forms::Label^ labelS1;


	private: System::Windows::Forms::TextBox^ textBoxS1;


	private: System::Windows::Forms::Button^ btn_random;
	private: System::Windows::Forms::Button^ btnS;


	private: System::Windows::Forms::GroupBox^ groupBox2;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::TextBox^ textBoxY;

	private: System::Windows::Forms::TextBox^ textBoxX;
	private: System::Windows::Forms::Button^ btn_clear1;



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox1;








	private: System::Windows::Forms::Label^ labelS2;




	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ TextBoxN;














	private: System::Windows::Forms::RichTextBox^ Matrix;









	private: System::Windows::Forms::Button^ btnIn;
	private: System::Windows::Forms::TextBox^ txtIn;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ txtSave;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnClose;





	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ txtSave1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btnIn2;
	private: System::Windows::Forms::TextBox^ txtIn2;


	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ txtSave2;

	private: System::Windows::Forms::Button^ btnSave2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnIn3;

	private: System::Windows::Forms::TextBox^ txtIn3;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ txtSave3;
	private: System::Windows::Forms::Button^ btnSave3;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ ShiftsTB;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::TextBox^ textBoxS2;
private: System::Windows::Forms::Button^ btnResult;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBoxAns2;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::TextBox^ txtIn1;
private: System::Windows::Forms::Label^ label8;


















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->ShiftsTB = (gcnew System::Windows::Forms::TextBox());
			this->btnIn = (gcnew System::Windows::Forms::Button());
			this->txtIn = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txtSave = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtMinNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtMaxNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtArraySize = (gcnew System::Windows::Forms::TextBox());
			this->btn_generate = (gcnew System::Windows::Forms::Button());
			this->sortedArr_lbl = (gcnew System::Windows::Forms::Label());
			this->sortedArr = (gcnew System::Windows::Forms::TextBox());
			this->btn_run = (gcnew System::Windows::Forms::Button());
			this->inputArr_lbl = (gcnew System::Windows::Forms::Label());
			this->inputArr = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->txtIn1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxAns2 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->txtSave1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Matrix = (gcnew System::Windows::Forms::RichTextBox());
			this->build_matrix = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->inputN = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btnIn2 = (gcnew System::Windows::Forms::Button());
			this->txtIn2 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtSave2 = (gcnew System::Windows::Forms::TextBox());
			this->btnSave2 = (gcnew System::Windows::Forms::Button());
			this->labelS2 = (gcnew System::Windows::Forms::Label());
			this->textBoxS2 = (gcnew System::Windows::Forms::TextBox());
			this->labelS1 = (gcnew System::Windows::Forms::Label());
			this->textBoxS1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_random = (gcnew System::Windows::Forms::Button());
			this->btnS = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnIn3 = (gcnew System::Windows::Forms::Button());
			this->txtIn3 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtSave3 = (gcnew System::Windows::Forms::TextBox());
			this->btnSave3 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->TextBoxN = (gcnew System::Windows::Forms::TextBox());
			this->btn_clear1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1045, 550);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label26);
			this->tabPage1->Controls->Add(this->ShiftsTB);
			this->tabPage1->Controls->Add(this->btnIn);
			this->tabPage1->Controls->Add(this->txtIn);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->txtSave);
			this->tabPage1->Controls->Add(this->btnSave);
			this->tabPage1->Controls->Add(this->btnClose);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->btn_generate);
			this->tabPage1->Controls->Add(this->sortedArr_lbl);
			this->tabPage1->Controls->Add(this->sortedArr);
			this->tabPage1->Controls->Add(this->btn_run);
			this->tabPage1->Controls->Add(this->inputArr_lbl);
			this->tabPage1->Controls->Add(this->inputArr);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1037, 524);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Задание 74";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &MyForm::tabPage1345_Layout);
			// 
			// label26
			// 
			this->label26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(13, 380);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(249, 24);
			this->label26->TabIndex = 38;
			this->label26->Text = L"Количество перестановок";
			// 
			// ShiftsTB
			// 
			this->ShiftsTB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ShiftsTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ShiftsTB->Location = System::Drawing::Point(14, 407);
			this->ShiftsTB->Name = L"ShiftsTB";
			this->ShiftsTB->ReadOnly = true;
			this->ShiftsTB->Size = System::Drawing::Size(1006, 26);
			this->ShiftsTB->TabIndex = 37;
			// 
			// btnIn
			// 
			this->btnIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnIn->Location = System::Drawing::Point(850, 63);
			this->btnIn->Margin = System::Windows::Forms::Padding(2);
			this->btnIn->Name = L"btnIn";
			this->btnIn->Size = System::Drawing::Size(170, 29);
			this->btnIn->TabIndex = 36;
			this->btnIn->Text = L"Ввод из файла";
			this->btnIn->UseVisualStyleBackColor = true;
			this->btnIn->Click += gcnew System::EventHandler(this, &MyForm::btnIn_Click);
			// 
			// txtIn
			// 
			this->txtIn->Location = System::Drawing::Point(850, 39);
			this->txtIn->Margin = System::Windows::Forms::Padding(2);
			this->txtIn->Name = L"txtIn";
			this->txtIn->ReadOnly = true;
			this->txtIn->Size = System::Drawing::Size(170, 20);
			this->txtIn->TabIndex = 35;
			this->txtIn->Click += gcnew System::EventHandler(this, &MyForm::txtIn_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(857, 16);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(151, 20);
			this->label19->TabIndex = 34;
			this->label19->Text = L"Имя файла ввода:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(857, 119);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(162, 20);
			this->label20->TabIndex = 33;
			this->label20->Text = L"Имя файла вывода:";
			// 
			// txtSave
			// 
			this->txtSave->Location = System::Drawing::Point(850, 146);
			this->txtSave->Margin = System::Windows::Forms::Padding(2);
			this->txtSave->Name = L"txtSave";
			this->txtSave->ReadOnly = true;
			this->txtSave->Size = System::Drawing::Size(170, 20);
			this->txtSave->TabIndex = 32;
			this->txtSave->Click += gcnew System::EventHandler(this, &MyForm::txtSave_Click);
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSave->Location = System::Drawing::Point(850, 170);
			this->btnSave->Margin = System::Windows::Forms::Padding(2);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(170, 28);
			this->btnSave->TabIndex = 31;
			this->btnSave->Text = L"Cохранить в файл";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(850, 474);
			this->btnClose->Margin = System::Windows::Forms::Padding(2);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(170, 30);
			this->btnClose->TabIndex = 30;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtMinNumber);
			this->groupBox1->Controls->Add(this->txtMaxNumber);
			this->groupBox1->Controls->Add(this->txtArraySize);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(18, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(344, 145);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Минимальный элемент";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Максимальный элемент";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Количество элементов";
			// 
			// txtMinNumber
			// 
			this->txtMinNumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtMinNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMinNumber->Location = System::Drawing::Point(226, 110);
			this->txtMinNumber->Name = L"txtMinNumber";
			this->txtMinNumber->Size = System::Drawing::Size(112, 26);
			this->txtMinNumber->TabIndex = 11;
			this->txtMinNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtMinNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// txtMaxNumber
			// 
			this->txtMaxNumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtMaxNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMaxNumber->Location = System::Drawing::Point(226, 77);
			this->txtMaxNumber->Name = L"txtMaxNumber";
			this->txtMaxNumber->Size = System::Drawing::Size(112, 26);
			this->txtMaxNumber->TabIndex = 10;
			this->txtMaxNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtMaxNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// txtArraySize
			// 
			this->txtArraySize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtArraySize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtArraySize->Location = System::Drawing::Point(226, 45);
			this->txtArraySize->Name = L"txtArraySize";
			this->txtArraySize->Size = System::Drawing::Size(112, 26);
			this->txtArraySize->TabIndex = 9;
			this->txtArraySize->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtArraySize->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// btn_generate
			// 
			this->btn_generate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_generate->Location = System::Drawing::Point(394, 36);
			this->btn_generate->Name = L"btn_generate";
			this->btn_generate->Size = System::Drawing::Size(256, 35);
			this->btn_generate->TabIndex = 7;
			this->btn_generate->Text = L"Сгенерировать массив";
			this->btn_generate->UseVisualStyleBackColor = true;
			this->btn_generate->Click += gcnew System::EventHandler(this, &MyForm::btnGeneration_Click);
			// 
			// sortedArr_lbl
			// 
			this->sortedArr_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->sortedArr_lbl->AutoSize = true;
			this->sortedArr_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortedArr_lbl->Location = System::Drawing::Point(13, 300);
			this->sortedArr_lbl->Name = L"sortedArr_lbl";
			this->sortedArr_lbl->Size = System::Drawing::Size(247, 24);
			this->sortedArr_lbl->TabIndex = 4;
			this->sortedArr_lbl->Text = L"Отсортированный массив";
			// 
			// sortedArr
			// 
			this->sortedArr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->sortedArr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortedArr->Location = System::Drawing::Point(14, 327);
			this->sortedArr->Name = L"sortedArr";
			this->sortedArr->ReadOnly = true;
			this->sortedArr->Size = System::Drawing::Size(1006, 26);
			this->sortedArr->TabIndex = 3;
			// 
			// btn_run
			// 
			this->btn_run->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_run->Location = System::Drawing::Point(395, 146);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(255, 35);
			this->btn_run->TabIndex = 2;
			this->btn_run->Text = L"Сортировать";
			this->btn_run->UseVisualStyleBackColor = true;
			this->btn_run->Click += gcnew System::EventHandler(this, &MyForm::btn_run_Click);
			// 
			// inputArr_lbl
			// 
			this->inputArr_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputArr_lbl->AutoSize = true;
			this->inputArr_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputArr_lbl->Location = System::Drawing::Point(13, 215);
			this->inputArr_lbl->Name = L"inputArr_lbl";
			this->inputArr_lbl->Size = System::Drawing::Size(158, 24);
			this->inputArr_lbl->TabIndex = 1;
			this->inputArr_lbl->Text = L"Входной массив";
			// 
			// inputArr
			// 
			this->inputArr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputArr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputArr->Location = System::Drawing::Point(14, 242);
			this->inputArr->MaxLength = 100;
			this->inputArr->Name = L"inputArr";
			this->inputArr->Size = System::Drawing::Size(1005, 26);
			this->inputArr->TabIndex = 0;
			this->inputArr->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			this->inputArr->Leave += gcnew System::EventHandler(this, &MyForm::inputArr_Leave);
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->AutoScrollMargin = System::Drawing::Size(5, 5);
			this->tabPage2->AutoScrollMinSize = System::Drawing::Size(5, 5);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->txtIn1);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->btnResult);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBoxAns2);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->txtSave1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->Matrix);
			this->tabPage2->Controls->Add(this->build_matrix);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->inputN);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1037, 524);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Задание 138";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &MyForm::tabPage2_Layout);
			this->tabPage2->Resize += gcnew System::EventHandler(this, &MyForm::tabPage2_Resize);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(673, 35);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(167, 30);
			this->button6->TabIndex = 52;
			this->button6->Text = L"Ввод из файла";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btnIn1_Click);
			// 
			// txtIn1
			// 
			this->txtIn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtIn1->ForeColor = System::Drawing::Color::Black;
			this->txtIn1->Location = System::Drawing::Point(499, 39);
			this->txtIn1->Margin = System::Windows::Forms::Padding(2);
			this->txtIn1->Name = L"txtIn1";
			this->txtIn1->ReadOnly = true;
			this->txtIn1->Size = System::Drawing::Size(170, 24);
			this->txtIn1->TabIndex = 51;
			this->txtIn1->Click += gcnew System::EventHandler(this, &MyForm::txtIn_Click);
			this->txtIn1->TextChanged += gcnew System::EventHandler(this, &MyForm::txtIn1_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(496, 8);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(151, 20);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Имя файла ввода:";
			// 
			// btnResult
			// 
			this->btnResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnResult->Location = System::Drawing::Point(232, 89);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(178, 30);
			this->btnResult->TabIndex = 43;
			this->btnResult->Text = L"Найти числа";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(20, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 20);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Искомые числа";
			// 
			// textBoxAns2
			// 
			this->textBoxAns2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxAns2->Location = System::Drawing::Point(24, 90);
			this->textBoxAns2->MaxLength = 40;
			this->textBoxAns2->Name = L"textBoxAns2";
			this->textBoxAns2->ReadOnly = true;
			this->textBoxAns2->Size = System::Drawing::Size(202, 29);
			this->textBoxAns2->TabIndex = 41;
			this->textBoxAns2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(496, 69);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(162, 20);
			this->label22->TabIndex = 40;
			this->label22->Text = L"Имя файла вывода:";
			// 
			// txtSave1
			// 
			this->txtSave1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtSave1->Location = System::Drawing::Point(500, 95);
			this->txtSave1->Margin = System::Windows::Forms::Padding(2);
			this->txtSave1->Name = L"txtSave1";
			this->txtSave1->ReadOnly = true;
			this->txtSave1->Size = System::Drawing::Size(170, 24);
			this->txtSave1->TabIndex = 39;
			this->txtSave1->Click += gcnew System::EventHandler(this, &MyForm::txtSave_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(673, 90);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 31);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Cохранить в файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::btnSave1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(860, 32);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 30);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Закрыть";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// Matrix
			// 
			this->Matrix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Matrix->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Matrix->Location = System::Drawing::Point(24, 134);
			this->Matrix->Name = L"Matrix";
			this->Matrix->ReadOnly = true;
			this->Matrix->Size = System::Drawing::Size(995, 363);
			this->Matrix->TabIndex = 3;
			this->Matrix->Text = L"";
			this->Matrix->WordWrap = false;
			// 
			// build_matrix
			// 
			this->build_matrix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->build_matrix->Location = System::Drawing::Point(230, 30);
			this->build_matrix->Name = L"build_matrix";
			this->build_matrix->Size = System::Drawing::Size(178, 30);
			this->build_matrix->TabIndex = 2;
			this->build_matrix->Text = L"Построить матрицу";
			this->build_matrix->UseVisualStyleBackColor = true;
			this->build_matrix->Click += gcnew System::EventHandler(this, &MyForm::build_matrix_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(18, 8);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(206, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Введите размер матрицы";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// inputN
			// 
			this->inputN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputN->Location = System::Drawing::Point(22, 31);
			this->inputN->MaxLength = 40;
			this->inputN->Name = L"inputN";
			this->inputN->Size = System::Drawing::Size(202, 29);
			this->inputN->TabIndex = 0;
			this->inputN->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inputN->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->btnIn2);
			this->tabPage3->Controls->Add(this->txtIn2);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->txtSave2);
			this->tabPage3->Controls->Add(this->btnSave2);
			this->tabPage3->Controls->Add(this->labelS2);
			this->tabPage3->Controls->Add(this->textBoxS2);
			this->tabPage3->Controls->Add(this->labelS1);
			this->tabPage3->Controls->Add(this->textBoxS1);
			this->tabPage3->Controls->Add(this->btn_random);
			this->tabPage3->Controls->Add(this->btnS);
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1037, 524);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Задание 175";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &MyForm::tabPage1345_Layout);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(834, 478);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(170, 30);
			this->button5->TabIndex = 43;
			this->button5->Text = L"Закрыть";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnIn2
			// 
			this->btnIn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnIn2->Location = System::Drawing::Point(754, 84);
			this->btnIn2->Margin = System::Windows::Forms::Padding(2);
			this->btnIn2->Name = L"btnIn2";
			this->btnIn2->Size = System::Drawing::Size(250, 29);
			this->btnIn2->TabIndex = 42;
			this->btnIn2->Text = L"Ввод из файла";
			this->btnIn2->UseVisualStyleBackColor = true;
			this->btnIn2->Click += gcnew System::EventHandler(this, &MyForm::btnIn2_Click);
			// 
			// txtIn2
			// 
			this->txtIn2->Location = System::Drawing::Point(754, 60);
			this->txtIn2->Margin = System::Windows::Forms::Padding(2);
			this->txtIn2->Name = L"txtIn2";
			this->txtIn2->ReadOnly = true;
			this->txtIn2->Size = System::Drawing::Size(250, 20);
			this->txtIn2->TabIndex = 41;
			this->txtIn2->Click += gcnew System::EventHandler(this, &MyForm::txtIn_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(802, 26);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(151, 20);
			this->label21->TabIndex = 40;
			this->label21->Text = L"Имя файла ввода:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(802, 135);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(162, 20);
			this->label23->TabIndex = 39;
			this->label23->Text = L"Имя файла вывода:";
			// 
			// txtSave2
			// 
			this->txtSave2->Location = System::Drawing::Point(754, 177);
			this->txtSave2->Margin = System::Windows::Forms::Padding(2);
			this->txtSave2->Name = L"txtSave2";
			this->txtSave2->ReadOnly = true;
			this->txtSave2->Size = System::Drawing::Size(250, 20);
			this->txtSave2->TabIndex = 38;
			this->txtSave2->Click += gcnew System::EventHandler(this, &MyForm::txtSave_Click);
			// 
			// btnSave2
			// 
			this->btnSave2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSave2->Location = System::Drawing::Point(754, 199);
			this->btnSave2->Margin = System::Windows::Forms::Padding(2);
			this->btnSave2->Name = L"btnSave2";
			this->btnSave2->Size = System::Drawing::Size(250, 28);
			this->btnSave2->TabIndex = 37;
			this->btnSave2->Text = L"Cохранить в файл";
			this->btnSave2->UseVisualStyleBackColor = true;
			this->btnSave2->Click += gcnew System::EventHandler(this, &MyForm::btnSave2_Click);
			// 
			// labelS2
			// 
			this->labelS2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelS2->AutoSize = true;
			this->labelS2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelS2->Location = System::Drawing::Point(8, 336);
			this->labelS2->Name = L"labelS2";
			this->labelS2->Size = System::Drawing::Size(189, 20);
			this->labelS2->TabIndex = 17;
			this->labelS2->Text = L"Количество делителей";
			// 
			// textBoxS2
			// 
			this->textBoxS2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxS2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxS2->Location = System::Drawing::Point(13, 370);
			this->textBoxS2->Name = L"textBoxS2";
			this->textBoxS2->ReadOnly = true;
			this->textBoxS2->Size = System::Drawing::Size(494, 26);
			this->textBoxS2->TabIndex = 18;
			this->textBoxS2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// labelS1
			// 
			this->labelS1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelS1->AutoSize = true;
			this->labelS1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelS1->Location = System::Drawing::Point(8, 247);
			this->labelS1->Name = L"labelS1";
			this->labelS1->Size = System::Drawing::Size(363, 20);
			this->labelS1->TabIndex = 16;
			this->labelS1->Text = L"Число с наибольшим количеством делителей";
			// 
			// textBoxS1
			// 
			this->textBoxS1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxS1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxS1->Location = System::Drawing::Point(12, 270);
			this->textBoxS1->Name = L"textBoxS1";
			this->textBoxS1->ReadOnly = true;
			this->textBoxS1->Size = System::Drawing::Size(487, 26);
			this->textBoxS1->TabIndex = 16;
			this->textBoxS1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn_random
			// 
			this->btn_random->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_random->Location = System::Drawing::Point(243, 77);
			this->btn_random->Name = L"btn_random";
			this->btn_random->Size = System::Drawing::Size(256, 35);
			this->btn_random->TabIndex = 11;
			this->btn_random->Text = L"Случайный диапазон";
			this->btn_random->UseVisualStyleBackColor = true;
			this->btn_random->Click += gcnew System::EventHandler(this, &MyForm::btn_random_Click);
			// 
			// btnS
			// 
			this->btnS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnS->Location = System::Drawing::Point(243, 131);
			this->btnS->Name = L"btnS";
			this->btnS->Size = System::Drawing::Size(256, 35);
			this->btnS->TabIndex = 10;
			this->btnS->Text = L"Найти число";
			this->btnS->UseVisualStyleBackColor = true;
			this->btnS->Click += gcnew System::EventHandler(this, &MyForm::btnS_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBoxY);
			this->groupBox2->Controls->Add(this->textBoxX);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(13, 60);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(190, 103);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Y";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"X";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// textBoxY
			// 
			this->textBoxY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxY->Location = System::Drawing::Point(32, 68);
			this->textBoxY->Name = L"textBoxY";
			this->textBoxY->Size = System::Drawing::Size(112, 26);
			this->textBoxY->TabIndex = 10;
			this->textBoxY->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxY->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxX_TextChanged);
			this->textBoxY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxX_KeyPress);
			// 
			// textBoxX
			// 
			this->textBoxX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxX->Location = System::Drawing::Point(32, 22);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(112, 26);
			this->textBoxX->TabIndex = 9;
			this->textBoxX->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxX->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxX_TextChanged);
			this->textBoxX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxX_KeyPress);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Controls->Add(this->btnIn3);
			this->tabPage4->Controls->Add(this->txtIn3);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->label25);
			this->tabPage4->Controls->Add(this->txtSave3);
			this->tabPage4->Controls->Add(this->btnSave3);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->TextBoxN);
			this->tabPage4->Controls->Add(this->btn_clear1);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1037, 524);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Задание 262";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &MyForm::tabPage1345_Layout);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(766, 425);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(256, 35);
			this->button4->TabIndex = 51;
			this->button4->Text = L"Проверить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::btn_get_words_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(852, 487);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 30);
			this->button1->TabIndex = 50;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnIn3
			// 
			this->btnIn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnIn3->Location = System::Drawing::Point(25, 60);
			this->btnIn3->Margin = System::Windows::Forms::Padding(2);
			this->btnIn3->Name = L"btnIn3";
			this->btnIn3->Size = System::Drawing::Size(343, 29);
			this->btnIn3->TabIndex = 49;
			this->btnIn3->Text = L"Ввод из файла";
			this->btnIn3->UseVisualStyleBackColor = true;
			this->btnIn3->Click += gcnew System::EventHandler(this, &MyForm::btnIn3_Click);
			// 
			// txtIn3
			// 
			this->txtIn3->Location = System::Drawing::Point(25, 36);
			this->txtIn3->Margin = System::Windows::Forms::Padding(2);
			this->txtIn3->Name = L"txtIn3";
			this->txtIn3->ReadOnly = true;
			this->txtIn3->Size = System::Drawing::Size(343, 20);
			this->txtIn3->TabIndex = 48;
			this->txtIn3->Click += gcnew System::EventHandler(this, &MyForm::txtIn_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(21, 13);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(151, 20);
			this->label24->TabIndex = 47;
			this->label24->Text = L"Имя файла ввода:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(659, 14);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(162, 20);
			this->label25->TabIndex = 46;
			this->label25->Text = L"Имя файла вывода:";
			// 
			// txtSave3
			// 
			this->txtSave3->Location = System::Drawing::Point(663, 39);
			this->txtSave3->Margin = System::Windows::Forms::Padding(2);
			this->txtSave3->Name = L"txtSave3";
			this->txtSave3->ReadOnly = true;
			this->txtSave3->Size = System::Drawing::Size(359, 20);
			this->txtSave3->TabIndex = 45;
			this->txtSave3->Click += gcnew System::EventHandler(this, &MyForm::txtSave_Click);
			// 
			// btnSave3
			// 
			this->btnSave3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSave3->Location = System::Drawing::Point(663, 61);
			this->btnSave3->Margin = System::Windows::Forms::Padding(2);
			this->btnSave3->Name = L"btnSave3";
			this->btnSave3->Size = System::Drawing::Size(359, 28);
			this->btnSave3->TabIndex = 44;
			this->btnSave3->Text = L"Cохранить в файл";
			this->btnSave3->UseVisualStyleBackColor = true;
			this->btnSave3->Click += gcnew System::EventHandler(this, &MyForm::btnSave3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(21, 144);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(178, 20);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Результат выражения";
			// 
			// TextBoxN
			// 
			this->TextBoxN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBoxN->Location = System::Drawing::Point(25, 171);
			this->TextBoxN->MaxLength = 40;
			this->TextBoxN->Name = L"TextBoxN";
			this->TextBoxN->ReadOnly = true;
			this->TextBoxN->Size = System::Drawing::Size(997, 29);
			this->TextBoxN->TabIndex = 25;
			this->TextBoxN->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// btn_clear1
			// 
			this->btn_clear1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_clear1->Location = System::Drawing::Point(25, 425);
			this->btn_clear1->Name = L"btn_clear1";
			this->btn_clear1->Size = System::Drawing::Size(256, 35);
			this->btn_clear1->TabIndex = 23;
			this->btn_clear1->Text = L"Очистить";
			this->btn_clear1->UseVisualStyleBackColor = true;
			this->btn_clear1->Click += gcnew System::EventHandler(this, &MyForm::btn_clear1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(21, 237);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(138, 20);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Исходная строка";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(25, 266);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(997, 153);
			this->textBox1->TabIndex = 18;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1045, 550);
			this->Controls->Add(this->tabControl1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Индивидуальные задания";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	// settings
	const int MAXARRAYSIZE = 20, MAXVALUE = 1000, MINVALUE = -1000, MAXN = 250;
	double  average;
	int min_value, max_value, array_size, input_array_size, summa;
	int min_number, max_number, chet_count, nechet_count;
	bool is_array_input, is_array_values_generated, is_ready_to_work, is_right_generation_data;
	String^ chet_numbers_str;
	String^ nechet_numbers_str;
	String^ array_str;
	String^ result_str;

	// функция для генерации случайного числа
	int rrand(int range_min, int range_max) {
		return rand() % (range_max - range_min + 1) + range_min;
	}

	//функция для сортировки по убыванию
	int compare(const void* a, const void* b)
	{
		const int* x = (int*)a;
		const int* y = (int*)b;

		if (*x > *y)
			return 1;
		else if (*x < *y)
			return -1;

		return 0;
	}

	// проверка наличия введенного массива для первого задания
	bool IsArrayInput() {
		bool check;
		if (inputArr->Text->Length > 0) {
			check = true;
			array_str = inputArr->Text + " ";
			// определение размера введенного массива
			input_array_size = 0;
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] == ' ' || array_str[i] == ';') {
					input_array_size += 1;
				}
			}
			array_size = input_array_size;
		}
		else {
			check = false;
		}
		return check;
	}

	// проверка наличия введенного массива из строки "input"
	bool IsArrayInput2(String^ input) {
		bool check;
		if (input->Length > 0) {
			check = true;
			array_str = input + " ";
			// определение размера введенного массива
			input_array_size = 0;
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] == ' ' || array_str[i] == '\t' || array_str[i] == '\n') {
					input_array_size += 1;
				}
			}
			array_size = input_array_size;
			if (array_size < 3 && array_size > 5)
				check = false;
		}
		else {
			check = false;
		}
		return check;
	}

	// вывод сообщения об ошибке
	void misstake_alert(String^ text_alert) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(text_alert, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	// -----------------------------------------------------------------------------------------------------------
	// первое задние
	// -----------------------------------------------------------------------------------------------------------

	// обновление данных для генерации массива
	void update_generation_data() {
		// определение характеристик массива
		if (txtArraySize->Text != "" && txtMinNumber->Text != "" && txtMaxNumber->Text != "") {
			array_size = Convert::ToInt32(txtArraySize->Text);
			min_value = Convert::ToInt32(txtMinNumber->Text);
			max_value = Convert::ToInt32(txtMaxNumber->Text);
		}
		get_arr();

	}

	// чтение массива 
	void get_arr() {
		String^ text_message = "";
		// проверка на наличие массива
		is_array_input = IsArrayInput();
		// чтение массива из textbox
		if (is_array_input) {
			array_str = inputArr->Text;

			int* arr = new int[array_size];
			int start_i = 0, end_i = 0, count_numbers = 0;
			is_ready_to_work = true;
			for (int i = array_str->Length - 1; i > 0; i--) {
				if (array_str[i] == ' ') {
					array_str = array_str->Substring(0, i);
				}
				else {
					break;
				}
			}
			array_str += " ";
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] != ' ' && !(i < array_str->Length && array_str[i + 1] == '-' && (array_str[i] == '-' || array_str[i] == ' '))) {
					end_i += 1;
				}
				else {
					if ((i > 0 && array_str[i - 1] == ' ') || (i > 0 && array_str[i - 1] == '-' && array_str[i] == '-')) {
						start_i = i + 1;
						end_i = start_i;
					}
					else {
						try {
							arr[count_numbers] = Convert::ToDouble(array_str->Substring(start_i, end_i - start_i));
							count_numbers += 1;

						}
						catch (...) {

						}
						start_i = i + 1;
						end_i = start_i;
					}


				}
			}
			// массив успешно прочитан
			if (is_ready_to_work) {
				summa = 0;
				chet_count = 0;
				nechet_count = 0;
				min_number = MAXVALUE;
				max_number = MINVALUE;
				chet_numbers_str = "";
				nechet_numbers_str = "";
				for (int i = 0; i < count_numbers; i++) {
					summa += arr[i];
					if (arr[i] > max_number)
						max_number = arr[i];
					if (arr[i] < min_number)
						min_number = arr[i];
					if (arr[i] % 2 == 0) {
						chet_count += 1;
						chet_numbers_str += Convert::ToString(arr[i]) + " ";
					}
					else {
						nechet_count += 1;
						nechet_numbers_str += Convert::ToString(arr[i]) + " ";
					}
				}
				// подстановка характеристик, если массив введен пользователем
				txtArraySize->Text = Convert::ToString(count_numbers);
				txtMaxNumber->Text = Convert::ToString(max_number);
				txtMinNumber->Text = Convert::ToString(min_number);
			}
			// ошибки при чтении массива
			else {
				misstake_alert("Неверный ввод массива" + text_message);
			}
			inputArr->Text = "";
			for (int i = 0; i < count_numbers; i++) {
				inputArr->Text += Convert::ToString(arr[i]) + " ";
			}

			delete[] arr;
		}
	}

	// генерация нового массива согласно параметрам
	private: System::Void btnGeneration_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(static_cast<unsigned int>(time(NULL)));
		inputArr->Text = "";
		String^ text;
		// считывание или генерация характеристик массива
		if (txtArraySize->Text->Length > 0) {
			try {
				if (txtMaxNumber->Text->Length == 0 || txtMinNumber->Text->Length == 0) {
					is_right_generation_data = false;
					text = "Не все значения для генерации заданы";
				}
				else {
					array_size = Convert::ToInt32(txtArraySize->Text);
					min_value = Convert::ToInt32(txtMinNumber->Text);
					max_value = Convert::ToInt32(txtMaxNumber->Text);

					is_right_generation_data = true;
					if (array_size < 1) {
						is_right_generation_data = false;
						text = "Количество элементов массива\nдолжно быть больше 0";
					}
					if (array_size > MAXARRAYSIZE) {
						is_right_generation_data = false;
						text = "Количество элементов массива\nдолжно быть меньше " + Convert::ToString(MAXARRAYSIZE);
					}
					if (min_value > max_value) {
						is_right_generation_data = false;
						text = "Минимальное значение\nдолжно быть меньше максимального";

					}
					if (min_value < MINVALUE) {
						is_right_generation_data = false;
						text = "Минимальное значение\nне должно быть меньше " + Convert::ToString(MINVALUE);
					}

					if (max_value > MAXVALUE) {
						is_right_generation_data = false;
						text = "Максимальное значение\nне должно быть больше " + Convert::ToString(MAXVALUE);
					}
				}
			}
			catch (...) {
				is_right_generation_data = false;
			}
		}
		else {
			if (txtArraySize->Text->Length == 0 || txtMaxNumber->Text->Length == 0 || txtMinNumber->Text->Length == 0) {
				is_right_generation_data = false;
				text = "Задайте значения для генерации";
			}
			else {
				array_size = rrand(1, MAXARRAYSIZE);
				min_value = rrand(MINVALUE, 0);
				max_value = rrand(0, MAXVALUE);
				txtArraySize->Text = Convert::ToString(array_size);
				txtMaxNumber->Text = Convert::ToString(max_value);
				txtMinNumber->Text = Convert::ToString(min_value);
				is_right_generation_data = true;
			}
		}

		if (is_right_generation_data) {
			// генерация массива
			int* arr = new int[array_size];
			array_str = "";
			for (int i = 0; i < array_size; i++) {
				arr[i] = rrand(min_value, max_value);
				array_str += Convert::ToString(arr[i]) + " ";
			}
			inputArr->Text = array_str;
			delete[] arr;
		}
		else {
			text = "Неверные данные для генерации\n" + text;
			misstake_alert(text);
		}

	}

	private: System::Void Input_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		TextBox^ TextBoxField = safe_cast<TextBox^>(sender);
		int len = TextBoxField->Text->Length;
		int ikey = e->KeyChar;
		char ckey = e->KeyChar;
		if (TextBoxField->Name != "inputArr") {
			if (ckey != '\b' && (((ikey < 48 || ikey > 57) && ckey != '-') || (len == 5 && TextBoxField->Text->Contains("-")) || (len == 4 && !TextBoxField->Text->Contains("-")))) {
				e->Handled = true;
			}
			if (ckey == '-' && TextBoxField->Text->Contains("-") || (len != 0 && ckey == '-')) {
				e->Handled = true;
			}
			if (ckey != '\b' && (TextBoxField->Name == "txtArraySize" && (ckey == '-' || len == 2))) {
				e->Handled = true;
			}
		}
		else {
			if (ckey != '\b' && ckey != '-' && ckey != ' ' && ckey != ';' && ckey != ',' && (ikey < 48 || ikey > 57)) {
				e->Handled = true;
			}
		}

	}

	// here
	String^ prefRez0;
	String^ prefRez1;
	String^ prefRez2;
	String^ prefRez3;
	boolean prefRez4;
	int schet = 0;
	bool changes = false;

	private: System::Void inputArr_Leave(System::Object^ sender, System::EventArgs^ e) {
		sortedArr->Text = "";
		ShiftsTB->Text = "";
		update_generation_data();
	}

	private: System::Void btn_run_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text_message = "";
		// проверка на наличие массива
		if (inputArr->Text->Length == 0) {
			misstake_alert("Введите или сгенерируйте массив");
			return;
		}
		is_array_input = IsArrayInput();
		// чтение массива из textbox
		if (is_array_input) {
			array_str = inputArr->Text;

			int* arr = new int[array_size];
			int start_i = 0, end_i = 0, count_numbers = 0;
			is_ready_to_work = true;
			for (int i = array_str->Length - 1; i > 0; i--) {
				if (array_str[i] != ' ' && !(i < array_str->Length && array_str[i + 1] == '-' && (array_str[i] == '-' || array_str[i] == ' '))) {
					array_str = array_str->Substring(0, i);
				}
				else {
					break;
				}
			}
			array_str += " ";
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] != ' ') {
					end_i += 1;
				}
				else {
					if ((i > 0 && array_str[i - 1] == ' ') || (i > 0 && array_str[i - 1] == '-' && array_str[i] == '-')) {
						start_i = i + 1;
						end_i = start_i;
					}

					else {
						try {
							arr[count_numbers] = Convert::ToInt32(array_str->Substring(start_i, end_i - start_i));
							count_numbers += 1;

						}
						catch (...) {


						}
						start_i = i + 1;
						end_i = start_i;
					}


				}
			}
			// массив успешно прочитан

			if (is_ready_to_work) {
				int shifts = 0;
				for (int i = 0; i < count_numbers; i++) {
					for (int j = 0; j < count_numbers-1; j++) {
						if (arr[j] > arr[j + 1]) {
							int temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
							shifts++;
						}
					}
				}

				String^ sorted_arr = "";
				for (int i = 0; i < count_numbers; i++) {
					sorted_arr += arr[i] + " ";
				}
				sortedArr->Text = sorted_arr;
				ShiftsTB->Text = Convert::ToString(shifts);
				changes = true;
			}
			// ошибки при чтении массива
			else {
				misstake_alert("Неверный ввод массива" + text_message);
			}

			delete[] arr;
		}
	}

	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ path;
			if (txtSave->Text == "")
			{
				// Создание объекта диалогового окна OpenFileDialog
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				// Настройка свойств диалогового окна
				openFileDialog1->Title = "Открытие файла";
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 1;
				openFileDialog1->ShowReadOnly = true;
				openFileDialog1->RestoreDirectory = true;
				// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					txtSave->Text = openFileDialog1->FileName;
					// Операции открытия файла, чтения из него и закрытия
				}
				else
					txtSave->Text = "";
				return;
			}

			path = txtSave->Text;
			// Создание файла для записи, если он не существовал.

			if (!File::Exists(path)) {
				StreamWriter^ sw = File::CreateText(path);
				sw->Close(); // Закрытие файла
			}
			StreamWriter^ sa = File::AppendText(path);

			if (prefRez0 != inputArr->Text && inputArr->Text != "") {
				String^ s = "- Исходный массив: ";
				sa->WriteLine(s + inputArr->Text + " "); // Запись в файл
				prefRez0 = this->inputArr->Text;
				changes = false;
			}

			if (prefRez1 != sortedArr->Text && sortedArr->Text != "") {
				String^ s = "- Отсортированный массив: ";
				sa->WriteLine(s + sortedArr->Text + " "); // Запись в файл
				String^ a = "- Количество перестановок при сортировке: ";
				sa->WriteLine(a + ShiftsTB->Text + " "); // Запись в файл
				prefRez1 = this->sortedArr->Text;
				changes = false;
				sa->WriteLine();
			}
			
			sa->Close();

		}
		catch (...) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Введите корректный путь до файла ", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void btnIn_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtIn->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtIn->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtIn->Text = "";

		}
		String^ path = txtIn->Text;
		String^ line;



		// Файловые операции в выбранной папке


		inputArr->Text = "";
		ShiftsTB->Text = "";
		StreamReader^ sr = File::OpenText(path);
		while (line = sr->ReadLine()) // Чтение строк из файла
			inputArr->Text += (line)+" "; // Вывод считанных строк
		sr->Close(); // Закрытие файла
		is_array_input = IsArrayInput();
		if (is_array_input) {
			array_str = inputArr->Text;

			for (int i = 0; i < array_str->Length; i++) {
				boolean a1 = array_str[i] != ' ';
				boolean a2 = array_str[i] != '0';
				boolean a3 = array_str[i] != '1';
				boolean a4 = array_str[i] != '2';
				boolean a5 = array_str[i] != '3';
				boolean a6 = array_str[i] != '4';
				boolean a7 = array_str[i] != '5';
				boolean a8 = array_str[i] != '6';
				boolean a9 = array_str[i] != '7';
				boolean a10 = array_str[i] != '8';
				boolean a11 = array_str[i] != '9';
				boolean a12 = array_str[i] != '-';
				if (a1 && a2 && a3 && a4 && a5 && a6 && a7 && a8 && a9 && a10 && a11 && a12)
				{

					array_str = array_str->Remove(i, 1);
					array_str = array_str->Insert(i, " ");
					if (array_str[0] == ' ') {
						array_str = array_str->Remove(0, 1);
						i--;
					}
					if (i > 0)
						i--;

				}
			}
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[0] == ' ') {
					array_str = array_str->Remove(0, 1);
					i--;
				}
			}
			inputArr->Text = array_str;

			int* arr = new int[array_size];
			int start_i = 0, end_i = 0, count_numbers = 0;
			is_ready_to_work = true;

			for (int i = array_str->Length - 1; i > 0; i--) {
				if (array_str[i] == ' ') {
					array_str = array_str->Substring(0, i);
				}
				else {
					break;
				}
			}
			array_str += " ";
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] != ' ') {
					end_i += 1;
				}
				else {
					if (i > 0 && array_str[i - 1] == ' ') {
						start_i = i + 1;
						end_i = start_i;
					}
					else {
						try {
							arr[count_numbers] = Convert::ToInt32(array_str->Substring(start_i, end_i - start_i));
							count_numbers += 1;

						}
						catch (...) {
							is_ready_to_work = false;
							break;
						}
						start_i = i + 1;
						end_i = start_i;
					}


				}
			}
			// массив успешно прочитан
			// подстановка характеристик, если массив введен пользователем
			for (int i = 0; i < count_numbers; i++) {
				summa += arr[i];
				if (arr[i] > max_number)
					max_number = arr[i];
				if (arr[i] < min_number)
					min_number = arr[i];
			}
			txtArraySize->Text = Convert::ToString(count_numbers);
			txtMaxNumber->Text = Convert::ToString(max_number);
			txtMinNumber->Text = Convert::ToString(min_number);
			if (is_ready_to_work) {
				inputArr->Text = "";

				for (int i = 0; i < count_numbers; i++) {
					inputArr->Text += Convert::ToString(arr[i]) + " ";
				}
				sortedArr->Text = "";
			}
			// ошибки при чтении массива
			else {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод массива", \
					"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			delete[] arr;
		}

	}

	private: System::Void txtSave_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::TextBox^ textBox = (TextBox^)sender;
		// Создание объекта диалогового окна FolderBrowserDialog
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				textBox->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				textBox->Text = "";
			return;
		}


	}

	private: System::Void txtIn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::TextBox^ textBox = (TextBox^)sender;
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			textBox->Text = "";
	}

	// -----------------------------------------------------------------------------------------------------------
	// второе задние
	// -----------------------------------------------------------------------------------------------------------

	private: System::Void GenerateN_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(static_cast<unsigned int>(time(NULL)));
		int n = rrand(1, MAXN);
		inputN->Text = Convert::ToString(n);
	}

	bool changes1 = false;
	bool changes2 = false;
	bool changes3 = false;
	bool isrunned = false;

	int find(int value, int arr[], int len ) {
		int id = -1;
		for (int i = 0; i < len; i++) {
			if (value == arr[i]) {
				id = i;
				break;
			}
		}
		return id;
	}

	private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAns2->Text = "";
		if (inputN->Text->Length == 0) {
			String^ text = "Введите размер матрицы";
			misstake_alert(text);
			return;
		}
		int const n = Convert::ToInt32(inputN->Text);
		if (n <= 0 || n > MAXN) {
			String^ text = "Недопустимый размер матрицы \n Введите размер матрицы\n от 1 до " + Convert::ToString(MAXN);
			misstake_alert(text);
			return;
		}
		if (Matrix->Text->Length == 0) {
			String^ text = "Введите или сгенерируйте матрицу";
			misstake_alert(text);
			return;
		}

		String^ matrix_str = Matrix->Text;
		int matrix[250][250] = { 0 };
		int b[250] = { 0 };
		int start_index = 0;
		int end_index = matrix_str->Length;
		int line_counter = 0;
		// чтение матрицы
		for (int i = 0; i < matrix_str->Length; i++) {
			if (matrix_str->Substring(i, 1) == "\n") {

				end_index = i;
				String^ line = matrix_str->Substring(start_index, end_index - start_index);
				start_index = i+1;
				// чтение массива из строки
				for (int i = 0; i < line->Length; i++) {
					boolean a1 = line[i] != ' ';
					boolean a2 = line[i] != '0';
					boolean a3 = line[i] != '1';
					boolean a4 = line[i] != '2';
					boolean a5 = line[i] != '3';
					boolean a6 = line[i] != '4';
					boolean a7 = line[i] != '5';
					boolean a8 = line[i] != '6';
					boolean a9 = line[i] != '7';
					boolean a10 = line[i] != '8';
					boolean a11 = line[i] != '9';
					boolean a12 = line[i] != '-';
					if (a1 && a2 && a3 && a4 && a5 && a6 && a7 && a8 && a9 && a10 && a11 && a12)
					{

						line = line->Remove(i, 1);
						line = line->Insert(i, " ");
						if (line[0] == ' ') {
							line = line->Remove(0, 1);
							i--;
						}
						if (i > 0)
							i--;

					}
				}
				for (int i = 0; i < line->Length; i++) {
					if (line[0] == ' ') {
						line = line->Remove(0, 1);
						i--;
					}
				}
				int* arr = new int[n];
				int start_i = 0, end_i = 0, count_numbers = 0;
				is_ready_to_work = true;

				for (int i = line->Length - 1; i > 0; i--) {
					if (line[i] == ' ') {
						line = line->Substring(0, i);
					}
					else {
						break;
					}
				}
				line += " ";
				for (int i = 0; i < line->Length; i++) {
					if (line[i] != ' ') {
						end_i += 1;
					}
					else {
						if (i > 0 && line[i - 1] == ' ') {
							start_i = i + 1;
							end_i = start_i;
						}
						else {
							try {
								arr[count_numbers] = Convert::ToInt32(line->Substring(start_i, end_i - start_i));
								count_numbers += 1;

							}
							catch (...) {
								is_ready_to_work = false;
								break;
							}
							start_i = i + 1;
							end_i = start_i;
						}


					}
				}
				// запись массива в матрицу
				for (int i = 0; i < n; i++) {
					matrix[line_counter][i] = arr[i];
				}
				line_counter++;

				delete[] arr;
			}
		}

		for (int i = 0; i < n; i++) {
			b[i] = matrix[0][i];
		}

		// оставляем в массиве b числа которые есть в остальных строках
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int index = find(b[j], matrix[i], n);
				if (index == -1) {
					b[j] = 0;
				}
			}
		}
		// формирование массива из чисел, входящих в каждую строку матрицы
		String^ answer = "";
		for (int i = 0; i < n; i++) {
			if (b[i] != 0) {
				answer += Convert::ToString(b[i]) + " ";
			}
		}
		if (answer->Length == 0) {
			misstake_alert("Искомые числа не найдены");
		}
		else {
			textBoxAns2->Text = answer;
		}
		isrunned = true;

	}

	private: System::Void build_matrix_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxAns2->Text = "";
		isrunned = false;
		if (inputN->Text->Length == 0) {
			String^ text = "Введите размер матрицы";
			misstake_alert(text);
			return;
		}
		int const a = Convert::ToInt32(inputN->Text);
		if (a <= 0 || a > MAXN) {
			String^ text = "Недопустимый размер матрицы \n Введите размер матрицы\n от 1 до " + Convert::ToString(MAXN);
			misstake_alert(text);
		}
		else {
			const int n = Convert::ToInt32(inputN->Text);
			int a[250][250] = { 0 };
			int b[250] = { 0 };
			int i = 0, j, k = 0, p = 1;
			srand(static_cast<unsigned int>(time(NULL)));

			for (int i = n-1; i >= 0; i--) {
				a[i][n-1] = rrand(1, 10);
				for (int j = n-2; j >= 0; j--) {
					a[i][j] = rrand(a[i][j+1], 5 + a[i][j + 1]);
				}
			}

			String^ matrix = "";
			int number = 0;
			int max_number_length, spaces;
			int max_row_length, max_col_length, x, y;

			max_number_length = Convert::ToString(n * n)->Length;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					String^ new_number_in_str = Convert::ToString(a[i][j]);
					spaces = max_number_length - new_number_in_str->Length;
					for (int i = 0; i < spaces; i++) {
						matrix += " ";
					}
					matrix += new_number_in_str + " ";
				}
				matrix += "\r\n";
			}
			int wx, wy;
			wx = this->Width - 24;
			wy = this->Height - 217;
			max_row_length = (max_number_length + 1) * n * 10;
			x = 24 + (wx - max_row_length) / 2;
			max_col_length = n * 2 * 10;
			y = 117 + (wy - max_col_length) / 2;
			if (max_row_length > wx) {
				x = 24;
			}
			if (max_col_length > wy) {
				y = 117;
			}
			Matrix->Text = matrix;
			
			changes1 = true;
		}
	}

	private: System::Void btnSave1_Click(System::Object^ sender, System::EventArgs^ e) {
		//path = "c:\\Users\\Данил\\Desktop\\massivy.txt";
		int n;
		if (inputN->Text != "") {
			n = Convert::ToInt32(inputN->Text);
		}
		else {
			n = 0;
			misstake_alert("Размерность матрицы не указана!");
			return;
		}
		if (Matrix->Text == "") {
			misstake_alert("Вы пытаетесь сохранить несозданную матрицу");
			return;
		}
		if (!isrunned) {
			misstake_alert("Вы пытаетесь сохранить без результата работы программы");
			return;
		}
		try {
			String^ path;
			if (txtSave1->Text == "")
			{
				// Создание объекта диалогового окна OpenFileDialog
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				// Настройка свойств диалогового окна
				openFileDialog1->Title = "Открытие файла";
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 1;
				openFileDialog1->ShowReadOnly = true;
				openFileDialog1->RestoreDirectory = true;
				// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					txtSave1->Text = openFileDialog1->FileName;
					// Операции открытия файла, чтения из него и закрытия
				}
				else
					txtSave1->Text = "";
				return;
			}

			path = txtSave1->Text;
			// Создание файла для записи, если он не существовал.

			if (!File::Exists(path)) {
				StreamWriter^ sw = File::CreateText(path);
				sw->Close(); // Закрытие файла
			}
			StreamWriter^ sa = File::AppendText(path);
			if (n > 0 && changes1) {
				sa->WriteLine("- Размерность матрицы: " + inputN->Text);
				changes1 = false;
			}
			if (prefRez1 != Matrix->Text && Matrix->Text != "") {
				String^ res = textBoxAns2->Text->Length > 0 ? textBoxAns2->Text + " " : "совпадений не найдено ";
				sa->WriteLine("- числа встречающиеся во всех строках матрицы: " + res);
				String^ s = "- матрица: \n";
				sa->WriteLine(s + Matrix->Text + " "); 
				prefRez1 = this->Matrix->Text;
				changes1 = false;
			}
			sa->Close();

		}
		catch (...) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Введите корректный путь до файла ", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void btnIn1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtIn1->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtIn1->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtIn1->Text = "";

		}
		String^ path = txtIn1->Text;
		String^ line;

		// Файловые операции в выбранной папке
		String^ input = "";
		StreamReader^ sr = File::OpenText(path);
		while (line = sr->ReadLine()) // Чтение строк из файла
			input += (line)+"\n"; // Вывод считанных строк
		sr->Close(); // Закрытие файла

		isrunned = false;
		textBoxAns2->Text = "";
		String^ matrix_str = input;
		int matrix[250][250] = { 0 };
		int b[250] = { 0 };
		int start_index = 0;
		int end_index = matrix_str->Length;
		int line_counter = 0;
		int n = 0;
		// чтение матрицы
		for (int i = 0; i < matrix_str->Length; i++) {
			if (matrix_str->Substring(i, 1) == "\n") {

				end_index = i;
				String^ line = matrix_str->Substring(start_index, end_index - start_index);
				start_index = i + 1;
				is_array_input = IsArrayInput2(line);
				if (is_array_input) {
					array_str = line;

					for (int i = 0; i < array_str->Length; i++) {
						boolean a1 = array_str[i] != ' ';
						boolean a2 = array_str[i] != '0';
						boolean a3 = array_str[i] != '1';
						boolean a4 = array_str[i] != '2';
						boolean a5 = array_str[i] != '3';
						boolean a6 = array_str[i] != '4';
						boolean a7 = array_str[i] != '5';
						boolean a8 = array_str[i] != '6';
						boolean a9 = array_str[i] != '7';
						boolean a10 = array_str[i] != '8';
						boolean a11 = array_str[i] != '9';
						boolean a12 = array_str[i] != '-';
						if (a1 && a2 && a3 && a4 && a5 && a6 && a7 && a8 && a9 && a10 && a11 && a12)
						{

							array_str = array_str->Remove(i, 1);
							array_str = array_str->Insert(i, " ");
							if (array_str[0] == ' ') {
								array_str = array_str->Remove(0, 1);
								i--;
							}
							if (i > 0)
								i--;

						}
					}
					for (int i = 0; i < array_str->Length; i++) {
						if (array_str[0] == ' ') {
							array_str = array_str->Remove(0, 1);
							i--;
						}
					}

					int* arr = new int[array_size];
					int start_i = 0, end_i = 0, count_numbers = 0;
					is_ready_to_work = true;

					for (int i = array_str->Length - 1; i > 0; i--) {
						if (array_str[i] == ' ') {
							array_str = array_str->Substring(0, i);
						}
						else {
							break;
						}
					}
					array_str += " ";
					for (int i = 0; i < array_str->Length; i++) {
						if (array_str[i] != ' ') {
							end_i += 1;
						}
						else {
							if (i > 0 && array_str[i - 1] == ' ') {
								start_i = i + 1;
								end_i = start_i;
							}
							else {
								try {
									arr[count_numbers] = Convert::ToInt32(array_str->Substring(start_i, end_i - start_i));
									count_numbers += 1;

								}
								catch (...) {
									is_ready_to_work = false;
									break;
								}
								start_i = i + 1;
								end_i = start_i;
							}


						}
					}
					// массив успешно прочитан
					if (is_ready_to_work) {
						n = count_numbers;
						for (int i = 0; i < count_numbers; i++) {
							matrix[line_counter][i] = arr[i];
						}
					}
					// ошибки при чтении массива
					else {
						misstake_alert("Неверный ввод массива");
						delete[] arr;
						return;
					}

					delete[] arr;
					line_counter++;
				}
				else {
					misstake_alert("Неверный ввод массива");
					return;
				}
			}

		}


		// запись матрицы
		String^ matrix_str_pure = "";
		int number = 0;
		int max_number_length, spaces;
		int max_row_length, max_col_length, x, y;

		max_number_length = Convert::ToString(n * n)->Length;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				String^ new_number_in_str = Convert::ToString(matrix[i][j]);
				spaces = max_number_length - new_number_in_str->Length;
				for (int i = 0; i < spaces; i++) {
					matrix_str_pure += " ";
				}
				matrix_str_pure += new_number_in_str + " ";
			}
			matrix_str_pure += "\r\n";
		}
		int wx, wy;
		wx = this->Width - 24;
		wy = this->Height - 217;
		max_row_length = (max_number_length + 1) * n * 10;
		x = 24 + (wx - max_row_length) / 2;
		max_col_length = n * 2 * 10;
		y = 117 + (wy - max_col_length) / 2;
		if (max_row_length > wx) {
			x = 24;
		}
		if (max_col_length > wy) {
			y = 117;
		}
		Matrix->Text = matrix_str_pure;
		inputN->Text = Convert::ToString(n);

		changes1 = true;

		
	}

	// -----------------------------------------------------------------------------------------------------------
	// третье задние
	// -----------------------------------------------------------------------------------------------------------

	private: System::Void btnS_Click(System::Object^ sender, System::EventArgs^ e) {
		int max_dividers = 0;
		int max_div_number = 0;
		int a, b, i, k, s;

		if (textBoxX->Text->Length == 0 || textBoxY->Text->Length == 0) {
			String^ text = "Введите границы диапазона";
			misstake_alert(text);
			return;
		}
		a = Convert::ToInt32(textBoxX->Text);
		b = Convert::ToInt32(textBoxY->Text);
		if (a <= 0 || a > b) {
			String^ text = "Недопустимый диапазон чисел";
			misstake_alert(text);
			return;
		}
		if (a == b && b == 1) {
			String^ text = "1 не является ни простым, ни составным числом";
			misstake_alert(text);
			return;
		}

		k = 0;
		s = 0;
		for (i = a; i <= b; i++)
		{
			int dividers = 0;
			for (int j = 1; j <= i / 2; j++)
			{
				if (i % j == 0)
					dividers++;
			}

			if (max_dividers < dividers)
			{
				max_dividers = dividers;
				max_div_number = i;
			}
			if (max_dividers == dividers)
			{
				if (i > max_div_number)
					max_div_number = i;
			}
		}
		textBoxS1->Text = Convert::ToString(max_div_number);
		textBoxS2->Text = Convert::ToString(max_dividers + 1);

	}

	private: System::Void clear_output() {
		textBoxS1->Text = "";
		textBoxS2->Text = "";
		changes2 = true;
	}
	
	private: System::Void textBoxX_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		clear_output();
	}

	private: System::Void btn_random_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(static_cast<unsigned int>(time(NULL)));
		double x = 0, y = 0, z = 0, t = 100;
		bool isgenerated = true;

		clear_output();
		x = rrand(1, 1000);
		y = rrand(1 + x, x + 1000);
		textBoxX->Text = Convert::ToString(x);
		textBoxY->Text = Convert::ToString(y);
	}

	private: System::Void textBoxX_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		TextBox^ TextBoxField = safe_cast<TextBox^>(sender);
		if (Convert::ToInt32(e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57)
		{
			e->Handled = true;
		}
		else e->Handled = false;//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен
		if (e->KeyChar == 8 && TextBoxField->Text != "")
		{
			e->Handled = false;
		}//если нажат бэкспейс и строка не пустая, то ввод разрешен
		if (e->KeyChar == 8 && TextBoxField->Text == "")
		{
			e->Handled = true;
		}//если нажат бэкспейс и строка пустая, то ввод запрещен
		if (TextBoxField->Text->IndexOf(",") == -1 && e->KeyChar == 44 && TextBoxField->Text != "") {
			e->Handled = false;
		}//если запятая не стоит, строка не пустая и нажата клавиша запятой, то ввод разрешен
	}

	private: System::Void btnSave2_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, y, z, t;
		int x_len, y_len, z_len, t_len;
		x_len = textBoxX->Text->Length;
		y_len = textBoxY->Text->Length;
		if (x_len == 0 || y_len == 0) {
			misstake_alert("Остались пустые поля. \nВведите все границы диапазона.");
			return;
		}
		x = Convert::ToDouble(textBoxX->Text);
		y = Convert::ToDouble(textBoxY->Text);
		if (x == 0 || y == 0) {
			misstake_alert("Введите границы диапазона > 0");
			return;
		}
		try {
			String^ path;
			if (txtSave2->Text == "")
			{
				// Создание объекта диалогового окна OpenFileDialog
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				// Настройка свойств диалогового окна
				openFileDialog1->Title = "Открытие файла";
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 1;
				openFileDialog1->ShowReadOnly = true;
				openFileDialog1->RestoreDirectory = true;
				// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					txtSave2->Text = openFileDialog1->FileName;
					// Операции открытия файла, чтения из него и закрытия
				}
				else
					txtSave2->Text = "";
				return;
			}

			path = txtSave2->Text;
			// Создание файла для записи, если он не существовал.

			if (!File::Exists(path)) {
				StreamWriter^ sw = File::CreateText(path);
				sw->Close(); // Закрытие файла
			}
			StreamWriter^ sa = File::AppendText(path);
			if (changes2) {
				sa->WriteLine("- границы диапазона: [" + textBoxX->Text + ", " + textBoxY->Text + "] ");
				changes2 = false;
			}
			String^ figure_type = "";
			String^ s = "- ";

			if (prefRez1 != textBoxS1->Text && textBoxS1->Text != "") {
				sa->WriteLine("- число с наибольшим количеством делителей: " + textBoxS1->Text);
				prefRez1 = textBoxS1->Text;
				changes2 = false;

			}
			if (prefRez2 != textBoxS2->Text && textBoxS2->Text != "") {
				sa->WriteLine("- количество делителей: " + textBoxS2->Text);
				prefRez2 = textBoxS2->Text;
				changes2 = false;
				sa->WriteLine();
			}
			sa->Close();

		}
		catch (...) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Введите корректный путь до файла ", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void btnIn2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtIn2->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtIn2->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtIn2->Text = "";

		}
		String^ path = txtIn2->Text;
		String^ line;



		// Файловые операции в выбранной папке


		String^ input = "";
		StreamReader^ sr = File::OpenText(path);
		while (line = sr->ReadLine()) // Чтение строк из файла
			input += (line)+" "; // Вывод считанных строк
		sr->Close(); // Закрытие файла
		int a1 = input->Length - 1;
		if (input->Substring(a1, 1) == " ") {
			input = input->Substring(0, input->Length - 1);
		}
		is_array_input = IsArrayInput2(input);
		if (is_array_input) {
			array_str = input;

			for (int i = 0; i < array_str->Length; i++) {
				boolean a1 = array_str[i] != ' ';
				boolean a2 = array_str[i] != '0';
				boolean a3 = array_str[i] != '1';
				boolean a4 = array_str[i] != '2';
				boolean a5 = array_str[i] != '3';
				boolean a6 = array_str[i] != '4';
				boolean a7 = array_str[i] != '5';
				boolean a8 = array_str[i] != '6';
				boolean a9 = array_str[i] != '7';
				boolean a10 = array_str[i] != '8';
				boolean a11 = array_str[i] != '9';
				boolean a12 = array_str[i] != ',';
				if (a1 && a2 && a3 && a4 && a5 && a6 && a7 && a8 && a9 && a10 && a11 && a12)
				{

					array_str = array_str->Remove(i, 1);
					array_str = array_str->Insert(i, " ");
					if (array_str[0] == ' ') {
						array_str = array_str->Remove(0, 1);
						i--;
					}
					if (i > 0)
						i--;

				}
			}
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[0] == ' ') {
					array_str = array_str->Remove(0, 1);
					i--;
				}
			}
			input = array_str;

			double* arr = new double[array_size];
			int start_i = 0, end_i = 0, count_numbers = 0;
			is_ready_to_work = true;

			for (int i = array_str->Length - 1; i > 0; i--) {
				if (array_str[i] == ' ') {
					array_str = array_str->Substring(0, i);
				}
				else {
					break;
				}
			}
			array_str += " ";
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] != ' ') {
					end_i += 1;
				}
				else {
					if (i > 0 && array_str[i - 1] == ' ') {
						start_i = i + 1;
						end_i = start_i;
					}
					else {
						try {
							arr[count_numbers] = Convert::ToDouble(array_str->Substring(start_i, end_i - start_i));
							count_numbers += 1;

						}
						catch (...) {
							is_ready_to_work = false;
							break;
						}
						start_i = i + 1;
						end_i = start_i;
					}


				}
			}
			// массив успешно прочитан
			// подстановка характеристик, если массив введен пользователем

			if (is_ready_to_work && count_numbers == 2) {
				textBoxX->Text = Convert::ToString(arr[0]);
				textBoxY->Text = Convert::ToString(arr[1]);
			}
			// ошибки при чтении массива
			else {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод", \
					"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			delete[] arr;
		}
		else {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}

	// -----------------------------------------------------------------------------------------------------------
	// четвертое задние
	// -----------------------------------------------------------------------------------------------------------


	//коды ошибок
	String^ ERR_SUCCESS = "ERR_SUCCESS";     //нет ошибки
	String^ ERR_NONE_STR = "ERR_NONE_STR";     //строка пуста
	String^ ERR_DIV_BYZERO = "ERR_DIV_BYZERO";   //деление на нуль!
	String^ ERR_PARSE_NUMBER = "ERR_PARSE_NUMBER"; //ошибка при парсирование числа
	String^ ERR_EXPR = "ERR_EXPR";          //другие ошибки: скобки, иные символы...
	String^ err = "ERR_SUCCESS";

	//вычисление мат-выражений из строки
	int is_expr(const char* s) {
		int n = 0;
		for (; *s; ++s) {
			if (*s == '(')
				++n;
			else if (*s == ')') {
				if (--n < 0)
					break;
			}
		}
		return (n == 0);
	}

	double calculate(char* s) {
		char* a, * b;
		err = "ERR_SUCCESS";
		const char* p = NULL;
		double         n = 0.0;

		if (*s && is_expr(s)) {
			a = s;
			while (*a && !isspace(*a))
				++a;
			for (b = a; *a; *a = *(++b)) {
				if (!isspace(*b))
					++a;
			}

			if (*s)
				n = _calc(s, &p);
			else
				err = "ERR_NONE_STR";
		}
		else
			err = (*s) ? "ERR_EXPR" : "ERR_NONE_STR";

		return n;
	}

	// рекурсивное вычисление мат-выражений из строки
	double  _calc(const char* s, const char** p) {
		int    neg;
		char   c, c1;
		char* i;
		const char* o;
		double k, v, n = 0.0;

		if ((*s == '(') || (*s == '-' && *(s + 1) == '(')) {
			neg = (*s == '-');
			n = _calc(s + (1 + neg), &o);
			if (err != "ERR_SUCCESS")
				return 0.0;
			s = o;
			if (neg)
				n = 0.0 - n;
		}
		else {
			n = strtod(s, &i);
			if (s == i) {
				err = "ERR_PARSE_NUMBER";
				return 0.0;
			}
			s = i;
		}

		while (*s && (*s != ')')) {
			c = *s++;
			if (!*s) {
				err = "ERR_EXPR";
				return 0.0;
			}

			if (*s == '(') {
				k = _calc(s + 1, &o);
				if (err != "ERR_SUCCESS")
					return 0.0;
				s = o;
			}
			else {
				k = strtod(s, &i);
				if (s == i) {
					err = "ERR_PARSE_NUMBER";
					return 0.0;
				}
				s = i;
			}

			switch (c) {
			case '*':
				n *= k;
				break;
			case '/':
				if (k == 0.0) {
					err = "ERR_DIV_BYZERO";
					return 0.0;
				}
				n /= k;
				break;
			case '+':
			case '-':

				if ((*s == '*') || (*s == '/')) {
					v = k;
					while (*s && (*s != ')')) {

						c1 = *s;
						if ((c1 == '+') || (c1 == '-'))
							break;

						++s;
						if (*s == '(') {
							k = _calc(s + 1, &o);
							if (err != "ERR_SUCCESS")
								return 0.0;
							s = o;
						}
						else {
							k = strtod(s, &i);
							if (s == i) {
								err = "ERR_PARSE_NUMBER";
								return 0.0;
							}
							s = i;
						}

						if (c1 == '/') {
							if (k == 0.0) {
								err = "ERR_DIV_BYZERO";
								return 0.0;
							}
							v /= k;
						}
						else if (c1 == '*')
							v *= k;
					}
					k = v;
				}

				if (c == '+')
					n += k;
				else if (c == '-')
					n -= k;

				if (*s == ')') {
					*p = s + 1;
					return n;
				}
				break;
			}
		}

		if (*s == ')')
			*p = s + 1;
		return n;
	}

	double calculate_from_string(String^ str) {
		double t, res;
		char* s = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
		res = calculate(s);
		return res;
	}

	private: System::Void btn_get_words_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = textBox1->Text;
		TextBoxN->Text = "";
		String^ answer = "";
		err = "ERR_SUCCESS";

		if (textBox1->Text == "") {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Введите строку", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		String^ trast_dict = "1234567890-+/*()., e";
		String^ trast_bracket_prefix = "-+/*(";
		String^ pure_text = "";
		bool is_pure = true;
		for (int i = 0; i < text->Length; i++) {
			String^ s = text->Substring(i, 1);
			
			if (trast_dict->IndexOf(s) == -1) {
				is_pure = false;
				break;
			}
			if (s == "(" && i > 0) {
				if (trast_bracket_prefix->IndexOf(text->Substring(i - 1, 1)) == -1) {
					is_pure = false;
					break;
				};
			}
			if (s != " ") {
				pure_text += s;
			}
		}
		if (is_pure) {
			answer = Convert::ToString(calculate_from_string(pure_text));
		}
		else {
			err = "ERR_EXPR";
		}
		
		if (err == "ERR_SUCCESS") {
			textBox1->Text = pure_text;
			TextBoxN->Text = answer;
			System::Windows::Forms::DialogResult result = MessageBox::Show("Выражение является арифметическим", \
				"Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		if (err == "ERR_NONE_STR") {
			misstake_alert("Строка пуста, введите выражение");
		}
		if (err == "ERR_DIV_BYZERO") {
			misstake_alert("Обнаружено деление на ноль! Исправьте выражение");
			TextBoxN->Text = "не является арифметическим выражением";
		}
		if (err == "ERR_PARSE_NUMBER") {
			misstake_alert("Одно из чисел записано некорректно, проверьте выражение");
			TextBoxN->Text = "не является арифметическим выражением";
		}
		if (err == "ERR_EXPR") {
			misstake_alert("Выражение не является арифметической операцией");
			TextBoxN->Text = "не является арифметическим выражением";
		}

		changes3 = true;
	}

	private: System::Void btn_clear1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
	}

	private: System::Void btnIn3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtIn3->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtIn3->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtIn3->Text = "";

		}
		String^ path = txtIn3->Text;
		String^ line;



		// Файловые операции в выбранной папке


		String^ input = "";
		StreamReader^ sr = File::OpenText(path);
		while (line = sr->ReadLine()) // Чтение строк из файла
			input += (line)+" "; // Вывод считанных строк

		sr->Close(); // Закрытие файла
		TextBoxN->Text = "";
		textBox1->Text = input + " ";
	}

	private: System::Void btnSave3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Введите выражение", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (TextBoxN->Text == "") {
			misstake_alert("Вы пытаетесь сохранить без \nрезультата работы программы. \nНажмите кнопку \" Проверить\" ");
			return;
		}

		try {
			String^ path;
			if (txtSave3->Text == "")
			{
				// Создание объекта диалогового окна OpenFileDialog
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				// Настройка свойств диалогового окна
				openFileDialog1->Title = "Открытие файла";
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 1;
				openFileDialog1->ShowReadOnly = true;
				openFileDialog1->RestoreDirectory = true;
				// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					txtSave3->Text = openFileDialog1->FileName;
					// Операции открытия файла, чтения из него и закрытия
				}
				else
					txtSave3->Text = "";
				return;
			}

			path = txtSave3->Text;
			// Создание файла для записи, если он не существовал.

			if (!File::Exists(path)) {
				StreamWriter^ sw = File::CreateText(path);
				sw->Close(); // Закрытие файла
			}

			StreamWriter^ sa = File::AppendText(path);
			if (textBox1->Text != "" && prefRez0 != textBox1->Text) {
				sa->WriteLine("- Исходный текст: " + textBox1->Text);
				String^ ans = (TextBoxN->Text->Length > 0 && TextBoxN->Text != "не является арифметическим выражением") ? "Да" : "Нет" ;
				sa->WriteLine("- Является арифметическим выражением: " + ans);
				if (TextBoxN->Text->Length > 0 && TextBoxN->Text != "не является арифметическим выражением") {
					sa->WriteLine("- Результат вычисления выражения: " + TextBoxN->Text);
				}
				sa->WriteLine();
				prefRez0 = textBox1->Text;
				changes3 = false;
			}
			sa->Close();

		}
		catch (...) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Введите корректный путь до файла ", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		TextBoxN->Text = "";
	}

	// -----------------------------------------------------------------------------------------------------------
	// прочие обработчики событий и функции ( изменения размеров окон ...)
	// -----------------------------------------------------------------------------------------------------------

	/*private: System::Void btn_clear2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "";
	}*/

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void tabPage2_Resize(System::Object^ sender, System::EventArgs^ e) {
		if (inputN->Text->Length > 0) {
			int const n = Convert::ToInt32(inputN->Text);
			int a[250][250] = { 0 };
			int i = 0, j, k = 0, p = 1;

			while (i < n * n) /*Цикл по номеру витка*/
			{
				k++;
				for (j = k - 1; j < n - k + 1; j++)
				{
					a[k - 1][j] = p++;
					i++;
				}   /*Определение значений верхнего гор столбца*/

				for (j = k; j < n - k + 1; j++)
				{
					a[j][n - k] = p++;
					i++;
				}   /* --//-- По правому вертикальному столбцу*/

				for (j = n - k - 1; j >= k - 1; j--)
				{
					a[n - k][j] = p++;
					i++;
				}   /* --//-- по нижнему горизонтальному столбцу*/

				for (j = n - k - 1; j >= k; j--)
				{
					a[j][k - 1] = p++;
					i++;
				}   /* --//-- по левому вертикальному столбцу*/

			}
			String^ answer = "";
			int number = 0;
			int max_number_length, spaces;
			int max_row_length, max_col_length, x, y;

			max_number_length = Convert::ToString(n * n)->Length;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					String^ new_number_in_str = Convert::ToString(a[i][j]);
					spaces = max_number_length - new_number_in_str->Length;
					for (int i = 0; i < spaces; i++) {
						answer += " ";
					}
					answer += new_number_in_str + " ";
				}
				answer += "\r\n";
			}
			int wx, wy;
			wx = this->Width - 24;
			wy = this->Height - 217;
			max_row_length = (max_number_length + 1) * n * 10;
			x = 24 + (wx - max_row_length) / 2;
			max_col_length = n * 2 * 10;
			y = 117 + (wy - max_col_length) / 2;
			if (max_row_length > wx) {
				x = 24;
			}
			if (max_col_length > wy) {
				y = 117;
			}
			Matrix->Size = System::Drawing::Size(this->Width - 72, this->Height - 217);
			Matrix->Text = answer;

		}

	}

	private: System::Void tabPage4_Resize(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Size = System::Drawing::Size(this->Width - 72, 280);
		btn_clear1->Location = System::Drawing::Point(this->Width - 300, 400);
		if (this->Width < 1300) {
			textBox1->Size = System::Drawing::Size(this->Width - 72, 133);
			btn_clear1->Location = System::Drawing::Point(this->Width - 300, 251);
		}
	}

	private: System::Void tabPage2_Layout(System::Object^ sender, System::Windows::Forms::LayoutEventArgs^ e) {
		this->MaximizeBox = true;
	}

	private: System::Void tabPage1345_Layout(System::Object^ sender, System::Windows::Forms::LayoutEventArgs^ e) {
		this->MaximizeBox = false;
		if (this->WindowState == System::Windows::Forms::FormWindowState::Maximized) {
			this->WindowState = System::Windows::Forms::FormWindowState::Normal;
		}
	}

	private: System::Void labelP2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void tabPage4_Layout(System::Object^ sender, System::Windows::Forms::LayoutEventArgs^ e) {
		this->MaximizeBox = true;
		if (this->Width < 1000) {
			textBox1->Size = System::Drawing::Size(this->Width - 72, 133);
			btn_clear1->Location = System::Drawing::Point(this->Width - 300, 251);
		}
	}

	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtIn1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}



};
}
