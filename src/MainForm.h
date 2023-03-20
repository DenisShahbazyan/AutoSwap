#pragma once
#include <thread>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "ProcessManager.h"
#include "PacketInjection.h"
#include "KeyboardHook.h"
#include "GlobalVariables.h"


namespace AutoSwap {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBoxCharName;
	protected:
	private: System::Windows::Forms::Button^ btnUpdateWindow;
	protected:
	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::TextBox^ hotKeyBox;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBoxEquip1;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip2;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip3;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip4;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip5;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip6;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip7;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip8;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip9;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip10;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip11;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip12;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip13;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip14;
	private: System::Windows::Forms::CheckBox^ checkBoxEquip15;
	private: System::Windows::Forms::TextBox^ equipCell1;
	private: System::Windows::Forms::TextBox^ equipCell2;
	private: System::Windows::Forms::TextBox^ equipCell3;
	private: System::Windows::Forms::TextBox^ equipCell4;
	private: System::Windows::Forms::TextBox^ equipCell5;
	private: System::Windows::Forms::TextBox^ equipCell6;
	private: System::Windows::Forms::TextBox^ equipCell7;
	private: System::Windows::Forms::TextBox^ equipCell8;
	private: System::Windows::Forms::TextBox^ equipCell9;
	private: System::Windows::Forms::TextBox^ equipCell10;
	private: System::Windows::Forms::TextBox^ equipCell11;
	private: System::Windows::Forms::TextBox^ equipCell12;
	private: System::Windows::Forms::TextBox^ equipCell13;
	private: System::Windows::Forms::TextBox^ equipCell14;
	private: System::Windows::Forms::TextBox^ equipCell15;
	private: System::Windows::Forms::ComboBox^ equipDoll1;
	private: System::Windows::Forms::ComboBox^ equipDoll2;
	private: System::Windows::Forms::ComboBox^ equipDoll3;
	private: System::Windows::Forms::ComboBox^ equipDoll4;
	private: System::Windows::Forms::ComboBox^ equipDoll5;
	private: System::Windows::Forms::ComboBox^ equipDoll6;
	private: System::Windows::Forms::ComboBox^ equipDoll7;
	private: System::Windows::Forms::ComboBox^ equipDoll8;
	private: System::Windows::Forms::ComboBox^ equipDoll9;
	private: System::Windows::Forms::ComboBox^ equipDoll10;
	private: System::Windows::Forms::ComboBox^ equipDoll11;
	private: System::Windows::Forms::ComboBox^ equipDoll12;
	private: System::Windows::Forms::ComboBox^ equipDoll13;
	private: System::Windows::Forms::ComboBox^ equipDoll14;
	private: System::Windows::Forms::ComboBox^ equipDoll15;




	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBoxCharName = (gcnew System::Windows::Forms::ComboBox());
			this->btnUpdateWindow = (gcnew System::Windows::Forms::Button());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->hotKeyBox = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxEquip1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEquip15 = (gcnew System::Windows::Forms::CheckBox());
			this->equipCell1 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell2 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell3 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell4 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell5 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell6 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell7 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell8 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell9 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell10 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell11 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell12 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell13 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell14 = (gcnew System::Windows::Forms::TextBox());
			this->equipCell15 = (gcnew System::Windows::Forms::TextBox());
			this->equipDoll1 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll2 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll3 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll4 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll5 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll6 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll7 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll8 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll9 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll10 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll11 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll12 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll13 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll14 = (gcnew System::Windows::Forms::ComboBox());
			this->equipDoll15 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// comboBoxCharName
			// 
			this->comboBoxCharName->FormattingEnabled = true;
			this->comboBoxCharName->Location = System::Drawing::Point(12, 12);
			this->comboBoxCharName->Name = L"comboBoxCharName";
			this->comboBoxCharName->Size = System::Drawing::Size(155, 21);
			this->comboBoxCharName->TabIndex = 0;
			// 
			// btnUpdateWindow
			// 
			this->btnUpdateWindow->Location = System::Drawing::Point(179, 10);
			this->btnUpdateWindow->Name = L"btnUpdateWindow";
			this->btnUpdateWindow->Size = System::Drawing::Size(75, 23);
			this->btnUpdateWindow->TabIndex = 1;
			this->btnUpdateWindow->Text = L"Обновить";
			this->btnUpdateWindow->UseVisualStyleBackColor = true;
			this->btnUpdateWindow->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(179, 393);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(75, 23);
			this->btnStart->TabIndex = 2;
			this->btnStart->Text = L"Запустить";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// hotKeyBox
			// 
			this->hotKeyBox->Location = System::Drawing::Point(12, 395);
			this->hotKeyBox->Name = L"hotKeyBox";
			this->hotKeyBox->ReadOnly = true;
			this->hotKeyBox->Size = System::Drawing::Size(155, 20);
			this->hotKeyBox->TabIndex = 3;
			this->hotKeyBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox1_KeyDown);
			// 
			// checkBoxEquip1
			// 
			this->checkBoxEquip1->AutoSize = true;
			this->checkBoxEquip1->Location = System::Drawing::Point(12, 48);
			this->checkBoxEquip1->Name = L"checkBoxEquip1";
			this->checkBoxEquip1->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip1->TabIndex = 4;
			this->checkBoxEquip1->Text = L"Ячейка №";
			this->checkBoxEquip1->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip2
			// 
			this->checkBoxEquip2->AutoSize = true;
			this->checkBoxEquip2->Location = System::Drawing::Point(12, 71);
			this->checkBoxEquip2->Name = L"checkBoxEquip2";
			this->checkBoxEquip2->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip2->TabIndex = 5;
			this->checkBoxEquip2->Text = L"Ячейка №";
			this->checkBoxEquip2->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip3
			// 
			this->checkBoxEquip3->AutoSize = true;
			this->checkBoxEquip3->Location = System::Drawing::Point(12, 94);
			this->checkBoxEquip3->Name = L"checkBoxEquip3";
			this->checkBoxEquip3->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip3->TabIndex = 6;
			this->checkBoxEquip3->Text = L"Ячейка №";
			this->checkBoxEquip3->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip4
			// 
			this->checkBoxEquip4->AutoSize = true;
			this->checkBoxEquip4->Location = System::Drawing::Point(12, 117);
			this->checkBoxEquip4->Name = L"checkBoxEquip4";
			this->checkBoxEquip4->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip4->TabIndex = 7;
			this->checkBoxEquip4->Text = L"Ячейка №";
			this->checkBoxEquip4->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip5
			// 
			this->checkBoxEquip5->AutoSize = true;
			this->checkBoxEquip5->Location = System::Drawing::Point(12, 140);
			this->checkBoxEquip5->Name = L"checkBoxEquip5";
			this->checkBoxEquip5->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip5->TabIndex = 8;
			this->checkBoxEquip5->Text = L"Ячейка №";
			this->checkBoxEquip5->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip6
			// 
			this->checkBoxEquip6->AutoSize = true;
			this->checkBoxEquip6->Location = System::Drawing::Point(12, 163);
			this->checkBoxEquip6->Name = L"checkBoxEquip6";
			this->checkBoxEquip6->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip6->TabIndex = 9;
			this->checkBoxEquip6->Text = L"Ячейка №";
			this->checkBoxEquip6->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip7
			// 
			this->checkBoxEquip7->AutoSize = true;
			this->checkBoxEquip7->Location = System::Drawing::Point(12, 186);
			this->checkBoxEquip7->Name = L"checkBoxEquip7";
			this->checkBoxEquip7->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip7->TabIndex = 10;
			this->checkBoxEquip7->Text = L"Ячейка №";
			this->checkBoxEquip7->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip8
			// 
			this->checkBoxEquip8->AutoSize = true;
			this->checkBoxEquip8->Location = System::Drawing::Point(12, 209);
			this->checkBoxEquip8->Name = L"checkBoxEquip8";
			this->checkBoxEquip8->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip8->TabIndex = 11;
			this->checkBoxEquip8->Text = L"Ячейка №";
			this->checkBoxEquip8->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip9
			// 
			this->checkBoxEquip9->AutoSize = true;
			this->checkBoxEquip9->Location = System::Drawing::Point(12, 232);
			this->checkBoxEquip9->Name = L"checkBoxEquip9";
			this->checkBoxEquip9->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip9->TabIndex = 12;
			this->checkBoxEquip9->Text = L"Ячейка №";
			this->checkBoxEquip9->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip10
			// 
			this->checkBoxEquip10->AutoSize = true;
			this->checkBoxEquip10->Location = System::Drawing::Point(12, 255);
			this->checkBoxEquip10->Name = L"checkBoxEquip10";
			this->checkBoxEquip10->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip10->TabIndex = 13;
			this->checkBoxEquip10->Text = L"Ячейка №";
			this->checkBoxEquip10->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip11
			// 
			this->checkBoxEquip11->AutoSize = true;
			this->checkBoxEquip11->Location = System::Drawing::Point(12, 278);
			this->checkBoxEquip11->Name = L"checkBoxEquip11";
			this->checkBoxEquip11->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip11->TabIndex = 14;
			this->checkBoxEquip11->Text = L"Ячейка №";
			this->checkBoxEquip11->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip12
			// 
			this->checkBoxEquip12->AutoSize = true;
			this->checkBoxEquip12->Location = System::Drawing::Point(12, 301);
			this->checkBoxEquip12->Name = L"checkBoxEquip12";
			this->checkBoxEquip12->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip12->TabIndex = 15;
			this->checkBoxEquip12->Text = L"Ячейка №";
			this->checkBoxEquip12->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip13
			// 
			this->checkBoxEquip13->AutoSize = true;
			this->checkBoxEquip13->Location = System::Drawing::Point(12, 324);
			this->checkBoxEquip13->Name = L"checkBoxEquip13";
			this->checkBoxEquip13->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip13->TabIndex = 16;
			this->checkBoxEquip13->Text = L"Ячейка №";
			this->checkBoxEquip13->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip14
			// 
			this->checkBoxEquip14->AutoSize = true;
			this->checkBoxEquip14->Location = System::Drawing::Point(12, 347);
			this->checkBoxEquip14->Name = L"checkBoxEquip14";
			this->checkBoxEquip14->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip14->TabIndex = 17;
			this->checkBoxEquip14->Text = L"Ячейка №";
			this->checkBoxEquip14->UseVisualStyleBackColor = true;
			// 
			// checkBoxEquip15
			// 
			this->checkBoxEquip15->AutoSize = true;
			this->checkBoxEquip15->Location = System::Drawing::Point(12, 370);
			this->checkBoxEquip15->Name = L"checkBoxEquip15";
			this->checkBoxEquip15->Size = System::Drawing::Size(77, 17);
			this->checkBoxEquip15->TabIndex = 18;
			this->checkBoxEquip15->Text = L"Ячейка №";
			this->checkBoxEquip15->UseVisualStyleBackColor = true;
			// 
			// equipCell1
			// 
			this->equipCell1->Location = System::Drawing::Point(95, 45);
			this->equipCell1->Name = L"equipCell1";
			this->equipCell1->Size = System::Drawing::Size(45, 20);
			this->equipCell1->TabIndex = 19;
			this->equipCell1->Text = L"1";
			// 
			// equipCell2
			// 
			this->equipCell2->Location = System::Drawing::Point(95, 68);
			this->equipCell2->Name = L"equipCell2";
			this->equipCell2->Size = System::Drawing::Size(45, 20);
			this->equipCell2->TabIndex = 20;
			this->equipCell2->Text = L"2";
			// 
			// equipCell3
			// 
			this->equipCell3->Location = System::Drawing::Point(95, 91);
			this->equipCell3->Name = L"equipCell3";
			this->equipCell3->Size = System::Drawing::Size(45, 20);
			this->equipCell3->TabIndex = 21;
			this->equipCell3->Text = L"3";
			// 
			// equipCell4
			// 
			this->equipCell4->Location = System::Drawing::Point(95, 114);
			this->equipCell4->Name = L"equipCell4";
			this->equipCell4->Size = System::Drawing::Size(45, 20);
			this->equipCell4->TabIndex = 22;
			this->equipCell4->Text = L"4";
			// 
			// equipCell5
			// 
			this->equipCell5->Location = System::Drawing::Point(95, 137);
			this->equipCell5->Name = L"equipCell5";
			this->equipCell5->Size = System::Drawing::Size(45, 20);
			this->equipCell5->TabIndex = 23;
			this->equipCell5->Text = L"5";
			// 
			// equipCell6
			// 
			this->equipCell6->Location = System::Drawing::Point(95, 160);
			this->equipCell6->Name = L"equipCell6";
			this->equipCell6->Size = System::Drawing::Size(45, 20);
			this->equipCell6->TabIndex = 24;
			this->equipCell6->Text = L"6";
			// 
			// equipCell7
			// 
			this->equipCell7->Location = System::Drawing::Point(95, 183);
			this->equipCell7->Name = L"equipCell7";
			this->equipCell7->Size = System::Drawing::Size(45, 20);
			this->equipCell7->TabIndex = 25;
			this->equipCell7->Text = L"7";
			// 
			// equipCell8
			// 
			this->equipCell8->Location = System::Drawing::Point(95, 206);
			this->equipCell8->Name = L"equipCell8";
			this->equipCell8->Size = System::Drawing::Size(45, 20);
			this->equipCell8->TabIndex = 26;
			this->equipCell8->Text = L"8";
			// 
			// equipCell9
			// 
			this->equipCell9->Location = System::Drawing::Point(95, 229);
			this->equipCell9->Name = L"equipCell9";
			this->equipCell9->Size = System::Drawing::Size(45, 20);
			this->equipCell9->TabIndex = 27;
			this->equipCell9->Text = L"9";
			// 
			// equipCell10
			// 
			this->equipCell10->Location = System::Drawing::Point(95, 252);
			this->equipCell10->Name = L"equipCell10";
			this->equipCell10->Size = System::Drawing::Size(45, 20);
			this->equipCell10->TabIndex = 28;
			this->equipCell10->Text = L"10";
			// 
			// equipCell11
			// 
			this->equipCell11->Location = System::Drawing::Point(95, 275);
			this->equipCell11->Name = L"equipCell11";
			this->equipCell11->Size = System::Drawing::Size(45, 20);
			this->equipCell11->TabIndex = 29;
			this->equipCell11->Text = L"11";
			// 
			// equipCell12
			// 
			this->equipCell12->Location = System::Drawing::Point(95, 298);
			this->equipCell12->Name = L"equipCell12";
			this->equipCell12->Size = System::Drawing::Size(45, 20);
			this->equipCell12->TabIndex = 30;
			this->equipCell12->Text = L"12";
			// 
			// equipCell13
			// 
			this->equipCell13->Location = System::Drawing::Point(95, 321);
			this->equipCell13->Name = L"equipCell13";
			this->equipCell13->Size = System::Drawing::Size(45, 20);
			this->equipCell13->TabIndex = 31;
			this->equipCell13->Text = L"13";
			// 
			// equipCell14
			// 
			this->equipCell14->Location = System::Drawing::Point(95, 344);
			this->equipCell14->Name = L"equipCell14";
			this->equipCell14->Size = System::Drawing::Size(45, 20);
			this->equipCell14->TabIndex = 32;
			this->equipCell14->Text = L"14";
			// 
			// equipCell15
			// 
			this->equipCell15->Location = System::Drawing::Point(95, 367);
			this->equipCell15->Name = L"equipCell15";
			this->equipCell15->Size = System::Drawing::Size(45, 20);
			this->equipCell15->TabIndex = 33;
			this->equipCell15->Text = L"15";
			// 
			// equipDoll1
			// 
			this->equipDoll1->FormattingEnabled = true;
			this->equipDoll1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll1->Location = System::Drawing::Point(150, 44);
			this->equipDoll1->Name = L"equipDoll1";
			this->equipDoll1->Size = System::Drawing::Size(104, 21);
			this->equipDoll1->TabIndex = 34;
			// 
			// equipDoll2
			// 
			this->equipDoll2->FormattingEnabled = true;
			this->equipDoll2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll2->Location = System::Drawing::Point(150, 67);
			this->equipDoll2->Name = L"equipDoll2";
			this->equipDoll2->Size = System::Drawing::Size(104, 21);
			this->equipDoll2->TabIndex = 35;
			// 
			// equipDoll3
			// 
			this->equipDoll3->FormattingEnabled = true;
			this->equipDoll3->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll3->Location = System::Drawing::Point(150, 90);
			this->equipDoll3->Name = L"equipDoll3";
			this->equipDoll3->Size = System::Drawing::Size(104, 21);
			this->equipDoll3->TabIndex = 36;
			// 
			// equipDoll4
			// 
			this->equipDoll4->FormattingEnabled = true;
			this->equipDoll4->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll4->Location = System::Drawing::Point(150, 113);
			this->equipDoll4->Name = L"equipDoll4";
			this->equipDoll4->Size = System::Drawing::Size(104, 21);
			this->equipDoll4->TabIndex = 37;
			// 
			// equipDoll5
			// 
			this->equipDoll5->FormattingEnabled = true;
			this->equipDoll5->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll5->Location = System::Drawing::Point(150, 136);
			this->equipDoll5->Name = L"equipDoll5";
			this->equipDoll5->Size = System::Drawing::Size(104, 21);
			this->equipDoll5->TabIndex = 38;
			// 
			// equipDoll6
			// 
			this->equipDoll6->FormattingEnabled = true;
			this->equipDoll6->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll6->Location = System::Drawing::Point(150, 159);
			this->equipDoll6->Name = L"equipDoll6";
			this->equipDoll6->Size = System::Drawing::Size(104, 21);
			this->equipDoll6->TabIndex = 39;
			// 
			// equipDoll7
			// 
			this->equipDoll7->FormattingEnabled = true;
			this->equipDoll7->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll7->Location = System::Drawing::Point(150, 182);
			this->equipDoll7->Name = L"equipDoll7";
			this->equipDoll7->Size = System::Drawing::Size(104, 21);
			this->equipDoll7->TabIndex = 40;
			// 
			// equipDoll8
			// 
			this->equipDoll8->FormattingEnabled = true;
			this->equipDoll8->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll8->Location = System::Drawing::Point(150, 205);
			this->equipDoll8->Name = L"equipDoll8";
			this->equipDoll8->Size = System::Drawing::Size(104, 21);
			this->equipDoll8->TabIndex = 41;
			// 
			// equipDoll9
			// 
			this->equipDoll9->FormattingEnabled = true;
			this->equipDoll9->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll9->Location = System::Drawing::Point(150, 228);
			this->equipDoll9->Name = L"equipDoll9";
			this->equipDoll9->Size = System::Drawing::Size(104, 21);
			this->equipDoll9->TabIndex = 42;
			// 
			// equipDoll10
			// 
			this->equipDoll10->FormattingEnabled = true;
			this->equipDoll10->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll10->Location = System::Drawing::Point(150, 251);
			this->equipDoll10->Name = L"equipDoll10";
			this->equipDoll10->Size = System::Drawing::Size(104, 21);
			this->equipDoll10->TabIndex = 43;
			// 
			// equipDoll11
			// 
			this->equipDoll11->FormattingEnabled = true;
			this->equipDoll11->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll11->Location = System::Drawing::Point(150, 274);
			this->equipDoll11->Name = L"equipDoll11";
			this->equipDoll11->Size = System::Drawing::Size(104, 21);
			this->equipDoll11->TabIndex = 44;
			// 
			// equipDoll12
			// 
			this->equipDoll12->FormattingEnabled = true;
			this->equipDoll12->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll12->Location = System::Drawing::Point(150, 297);
			this->equipDoll12->Name = L"equipDoll12";
			this->equipDoll12->Size = System::Drawing::Size(104, 21);
			this->equipDoll12->TabIndex = 44;
			// 
			// equipDoll13
			// 
			this->equipDoll13->FormattingEnabled = true;
			this->equipDoll13->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll13->Location = System::Drawing::Point(150, 320);
			this->equipDoll13->Name = L"equipDoll13";
			this->equipDoll13->Size = System::Drawing::Size(104, 21);
			this->equipDoll13->TabIndex = 45;
			// 
			// equipDoll14
			// 
			this->equipDoll14->FormattingEnabled = true;
			this->equipDoll14->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll14->Location = System::Drawing::Point(150, 343);
			this->equipDoll14->Name = L"equipDoll14";
			this->equipDoll14->Size = System::Drawing::Size(104, 21);
			this->equipDoll14->TabIndex = 46;
			// 
			// equipDoll15
			// 
			this->equipDoll15->FormattingEnabled = true;
			this->equipDoll15->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Шлем", L"Броня", L"Поножи", L"Ботинки", L"Наручи",
					L"Накидка", L"Трактат", L"Пуха", L"Верхняя бижа", L"Нижняя бижа", L"Кольцо 1", L"Кольцо 2", L"Цитатник", L"Диск", L"Стрелы"
			});
			this->equipDoll15->Location = System::Drawing::Point(150, 366);
			this->equipDoll15->Name = L"equipDoll15";
			this->equipDoll15->Size = System::Drawing::Size(104, 21);
			this->equipDoll15->TabIndex = 47;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(266, 422);
			this->Controls->Add(this->equipDoll15);
			this->Controls->Add(this->equipDoll14);
			this->Controls->Add(this->equipDoll13);
			this->Controls->Add(this->equipDoll12);
			this->Controls->Add(this->equipDoll11);
			this->Controls->Add(this->equipDoll10);
			this->Controls->Add(this->equipDoll9);
			this->Controls->Add(this->equipDoll8);
			this->Controls->Add(this->equipDoll7);
			this->Controls->Add(this->equipDoll6);
			this->Controls->Add(this->equipDoll5);
			this->Controls->Add(this->equipDoll4);
			this->Controls->Add(this->equipDoll3);
			this->Controls->Add(this->equipDoll2);
			this->Controls->Add(this->equipDoll1);
			this->Controls->Add(this->equipCell15);
			this->Controls->Add(this->equipCell14);
			this->Controls->Add(this->equipCell13);
			this->Controls->Add(this->equipCell12);
			this->Controls->Add(this->equipCell11);
			this->Controls->Add(this->equipCell10);
			this->Controls->Add(this->equipCell9);
			this->Controls->Add(this->equipCell8);
			this->Controls->Add(this->equipCell7);
			this->Controls->Add(this->equipCell6);
			this->Controls->Add(this->equipCell5);
			this->Controls->Add(this->equipCell4);
			this->Controls->Add(this->equipCell3);
			this->Controls->Add(this->equipCell2);
			this->Controls->Add(this->equipCell1);
			this->Controls->Add(this->checkBoxEquip15);
			this->Controls->Add(this->checkBoxEquip14);
			this->Controls->Add(this->checkBoxEquip13);
			this->Controls->Add(this->checkBoxEquip12);
			this->Controls->Add(this->checkBoxEquip11);
			this->Controls->Add(this->checkBoxEquip10);
			this->Controls->Add(this->checkBoxEquip9);
			this->Controls->Add(this->checkBoxEquip8);
			this->Controls->Add(this->checkBoxEquip7);
			this->Controls->Add(this->checkBoxEquip6);
			this->Controls->Add(this->checkBoxEquip5);
			this->Controls->Add(this->checkBoxEquip4);
			this->Controls->Add(this->checkBoxEquip3);
			this->Controls->Add(this->checkBoxEquip2);
			this->Controls->Add(this->checkBoxEquip1);
			this->Controls->Add(this->hotKeyBox);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->btnUpdateWindow);
			this->Controls->Add(this->comboBoxCharName);
			this->Name = L"MainForm";
			this->Text = L"AutoSwap";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/**
	 * Кнопка "Обновить".
	 */
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<DWORD> PIDs = GetProcessIdsByProcessName(L"elementclient.exe");
		map_charName_processId = FindClients(PIDs);

		this->comboBoxCharName->Items->Clear();
		for (auto const& element: map_charName_processId) {
			this->comboBoxCharName->Items->Add(gcnew String(element.first.c_str()));
		}
		if (this->comboBoxCharName->Items->Count != 0) {
			this->comboBoxCharName->Text = this->comboBoxCharName->Items[0]->ToString();
		}
	}

	/**
	* Кнопка "Запустить".
	*/
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (G_THREAD_ID != 0) {
			PostThreadMessage(G_THREAD_ID, WM_QUIT, 0, 0);
			G_IS_THREAD_RUNNING = !G_IS_THREAD_RUNNING;
			RemoveHook();
		}
		if (!G_IS_THREAD_RUNNING && hotKeyBox->Text != "") {
			G_IS_THREAD_RUNNING = !G_IS_THREAD_RUNNING;

			std::wstring wstr = msclr::interop::marshal_as<std::wstring>(comboBoxCharName->Text);
			G_PID = map_charName_processId[wstr];

			G_KEY_CODE_SWAP = (int)((Keys)Enum::Parse(Keys::typeid, hotKeyBox->Text));

			SetHook();
			std::thread thread_msg_loop(StartMessageLoop);
			HANDLE native_handle = thread_msg_loop.native_handle();
			G_THREAD_ID = GetThreadId(native_handle);
			thread_msg_loop.detach();

			SaveCurrentStateForm();
		}
	}
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		hotKeyBox->Text = e->KeyCode.ToString();
		e->SuppressKeyPress = true;
	}
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		RemoveHook();
		SaveStateFormElements();
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadStateFormElements();
	}

#pragma region Window Form element save state
	void SaveCurrentStateForm() {
		G_checkBoxEquips = {
			checkBoxEquip1->Checked,
			checkBoxEquip2->Checked,
			checkBoxEquip3->Checked,
			checkBoxEquip4->Checked,
			checkBoxEquip5->Checked,
			checkBoxEquip6->Checked,
			checkBoxEquip7->Checked,
			checkBoxEquip8->Checked,
			checkBoxEquip9->Checked,
			checkBoxEquip10->Checked,
			checkBoxEquip11->Checked,
			checkBoxEquip12->Checked,
			checkBoxEquip13->Checked,
			checkBoxEquip14->Checked,
			checkBoxEquip15->Checked
		};
		G_equipCells = {
			System::Convert::ToInt32(equipCell1->Text),
			System::Convert::ToInt32(equipCell2->Text),
			System::Convert::ToInt32(equipCell3->Text),
			System::Convert::ToInt32(equipCell4->Text),
			System::Convert::ToInt32(equipCell5->Text),
			System::Convert::ToInt32(equipCell6->Text),
			System::Convert::ToInt32(equipCell7->Text),
			System::Convert::ToInt32(equipCell8->Text),
			System::Convert::ToInt32(equipCell9->Text),
			System::Convert::ToInt32(equipCell10->Text),
			System::Convert::ToInt32(equipCell11->Text),
			System::Convert::ToInt32(equipCell12->Text),
			System::Convert::ToInt32(equipCell13->Text),
			System::Convert::ToInt32(equipCell14->Text),
			System::Convert::ToInt32(equipCell15->Text)
		};
		G_equipDolls = {
			msclr::interop::marshal_as<std::wstring>(equipDoll1->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll2->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll3->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll4->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll5->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll6->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll7->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll8->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll9->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll10->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll11->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll12->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll13->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll14->Text),
			msclr::interop::marshal_as<std::wstring>(equipDoll15->Text)
		};
	}
	void SaveStateFormElements() {
		Microsoft::Win32::RegistryKey^ key;

		key = Microsoft::Win32::Registry::CurrentUser->CreateSubKey("SOFTWARE\\\\AutoSwap");

		key->SetValue("checkBoxEquip1", this->checkBoxEquip1->Checked);
		key->SetValue("checkBoxEquip2", this->checkBoxEquip2->Checked);
		key->SetValue("checkBoxEquip3", this->checkBoxEquip3->Checked);
		key->SetValue("checkBoxEquip4", this->checkBoxEquip4->Checked);
		key->SetValue("checkBoxEquip5", this->checkBoxEquip5->Checked);
		key->SetValue("checkBoxEquip6", this->checkBoxEquip6->Checked);
		key->SetValue("checkBoxEquip7", this->checkBoxEquip7->Checked);
		key->SetValue("checkBoxEquip8", this->checkBoxEquip8->Checked);
		key->SetValue("checkBoxEquip9", this->checkBoxEquip9->Checked);
		key->SetValue("checkBoxEquip10", this->checkBoxEquip10->Checked);
		key->SetValue("checkBoxEquip11", this->checkBoxEquip11->Checked);
		key->SetValue("checkBoxEquip12", this->checkBoxEquip12->Checked);
		key->SetValue("checkBoxEquip13", this->checkBoxEquip13->Checked);
		key->SetValue("checkBoxEquip14", this->checkBoxEquip14->Checked);
		key->SetValue("checkBoxEquip15", this->checkBoxEquip15->Checked);

		key->SetValue("equipCell1", this->equipCell1->Text);
		key->SetValue("equipCell2", this->equipCell2->Text);
		key->SetValue("equipCell3", this->equipCell3->Text);
		key->SetValue("equipCell4", this->equipCell4->Text);
		key->SetValue("equipCell5", this->equipCell5->Text);
		key->SetValue("equipCell6", this->equipCell6->Text);
		key->SetValue("equipCell7", this->equipCell7->Text);
		key->SetValue("equipCell8", this->equipCell8->Text);
		key->SetValue("equipCell9", this->equipCell9->Text);
		key->SetValue("equipCell10", this->equipCell10->Text);
		key->SetValue("equipCell11", this->equipCell11->Text);
		key->SetValue("equipCell12", this->equipCell12->Text);
		key->SetValue("equipCell13", this->equipCell13->Text);
		key->SetValue("equipCell14", this->equipCell14->Text);
		key->SetValue("equipCell15", this->equipCell15->Text);

		key->SetValue("equipDoll1", this->equipDoll1->Text);
		key->SetValue("equipDoll2", this->equipDoll2->Text);
		key->SetValue("equipDoll3", this->equipDoll3->Text);
		key->SetValue("equipDoll4", this->equipDoll4->Text);
		key->SetValue("equipDoll5", this->equipDoll5->Text);
		key->SetValue("equipDoll6", this->equipDoll6->Text);
		key->SetValue("equipDoll7", this->equipDoll7->Text);
		key->SetValue("equipDoll8", this->equipDoll8->Text);
		key->SetValue("equipDoll9", this->equipDoll9->Text);
		key->SetValue("equipDoll10", this->equipDoll10->Text);
		key->SetValue("equipDoll11", this->equipDoll11->Text);
		key->SetValue("equipDoll12", this->equipDoll12->Text);
		key->SetValue("equipDoll13", this->equipDoll13->Text);
		key->SetValue("equipDoll14", this->equipDoll14->Text);
		key->SetValue("equipDoll15", this->equipDoll15->Text);

		key->SetValue("hotKeyBox", this->hotKeyBox->Text);

		key->Close();
	}
	void LoadStateFormElements() {
		Microsoft::Win32::RegistryKey^ key;

		key = Microsoft::Win32::Registry::CurrentUser->OpenSubKey("SOFTWARE\\\\AutoSwap");
		
		if (key != nullptr) {
			this->checkBoxEquip1->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip1"));
			this->checkBoxEquip2->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip2"));
			this->checkBoxEquip3->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip3"));
			this->checkBoxEquip4->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip4"));
			this->checkBoxEquip5->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip5"));
			this->checkBoxEquip6->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip6"));
			this->checkBoxEquip7->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip7"));
			this->checkBoxEquip8->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip8"));
			this->checkBoxEquip9->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip9"));
			this->checkBoxEquip10->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip10"));
			this->checkBoxEquip11->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip11"));
			this->checkBoxEquip12->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip12"));
			this->checkBoxEquip13->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip13"));
			this->checkBoxEquip14->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip14"));
			this->checkBoxEquip15->Checked = System::Convert::ToBoolean(key->GetValue("checkBoxEquip15"));

			this->equipCell1->Text = System::Convert::ToString(key->GetValue("equipCell1"));
			this->equipCell2->Text = System::Convert::ToString(key->GetValue("equipCell2"));
			this->equipCell3->Text = System::Convert::ToString(key->GetValue("equipCell3"));
			this->equipCell4->Text = System::Convert::ToString(key->GetValue("equipCell4"));
			this->equipCell5->Text = System::Convert::ToString(key->GetValue("equipCell5"));
			this->equipCell6->Text = System::Convert::ToString(key->GetValue("equipCell6"));
			this->equipCell7->Text = System::Convert::ToString(key->GetValue("equipCell7"));
			this->equipCell8->Text = System::Convert::ToString(key->GetValue("equipCell8"));
			this->equipCell9->Text = System::Convert::ToString(key->GetValue("equipCell9"));
			this->equipCell10->Text = System::Convert::ToString(key->GetValue("equipCell10"));
			this->equipCell11->Text = System::Convert::ToString(key->GetValue("equipCell11"));
			this->equipCell12->Text = System::Convert::ToString(key->GetValue("equipCell12"));
			this->equipCell13->Text = System::Convert::ToString(key->GetValue("equipCell13"));
			this->equipCell14->Text = System::Convert::ToString(key->GetValue("equipCell14"));
			this->equipCell15->Text = System::Convert::ToString(key->GetValue("equipCell15"));
			
			this->equipDoll1->Text = System::Convert::ToString(key->GetValue("equipDoll1"));
			this->equipDoll2->Text = System::Convert::ToString(key->GetValue("equipDoll2"));
			this->equipDoll3->Text = System::Convert::ToString(key->GetValue("equipDoll3"));
			this->equipDoll4->Text = System::Convert::ToString(key->GetValue("equipDoll4"));
			this->equipDoll5->Text = System::Convert::ToString(key->GetValue("equipDoll5"));
			this->equipDoll6->Text = System::Convert::ToString(key->GetValue("equipDoll6"));
			this->equipDoll7->Text = System::Convert::ToString(key->GetValue("equipDoll7"));
			this->equipDoll8->Text = System::Convert::ToString(key->GetValue("equipDoll8"));
			this->equipDoll9->Text = System::Convert::ToString(key->GetValue("equipDoll9"));
			this->equipDoll10->Text = System::Convert::ToString(key->GetValue("equipDoll10"));
			this->equipDoll11->Text = System::Convert::ToString(key->GetValue("equipDoll11"));
			this->equipDoll12->Text = System::Convert::ToString(key->GetValue("equipDoll12"));
			this->equipDoll13->Text = System::Convert::ToString(key->GetValue("equipDoll13"));
			this->equipDoll14->Text = System::Convert::ToString(key->GetValue("equipDoll14"));
			this->equipDoll15->Text = System::Convert::ToString(key->GetValue("equipDoll15"));

			this->hotKeyBox->Text = System::Convert::ToString(key->GetValue("hotKeyBox"));

			key->Close();
		}
	}
#pragma endregion
};
}
