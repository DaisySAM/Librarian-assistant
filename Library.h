#pragma once
#include "GeneralController.h"
#include <iostream>
#include <string>
#include <dos.h>
using namespace std;

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Library
	/// </summary>
	public ref class Library : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::Button^  buttonAddPutAuthor;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownAge;

	private: System::Windows::Forms::TextBox^  textBoxThirdname;

	private: System::Windows::Forms::TextBox^  textBoxName;

	private: System::Windows::Forms::TextBox^  textBoxSurname;








	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::NumericUpDown^  numericUpDownAddYear;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownAddUDK;
	private: System::Windows::Forms::Label^  labelAge;

	private: System::Windows::Forms::Label^  labelThirdname;
	private: System::Windows::Forms::Label^  labelName;
	private: System::Windows::Forms::Label^  label;

	private: System::Windows::Forms::Label^  labelSurname;
	private: System::Windows::Forms::Label^  labelError;
	private: System::Windows::Forms::Label^  labelError2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBoxAddGenre;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelAddGenre;
	private: System::Windows::Forms::Label^  labelChangeThirdname;
	private: System::Windows::Forms::Label^  labelChangeName;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownChangeAge;

	private: System::Windows::Forms::TextBox^  textBoxChangeThirdname;

	private: System::Windows::Forms::TextBox^  textBoxChangeName;

	private: System::Windows::Forms::Label^  labelChangeAge;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownChangeCount;
	private: System::Windows::Forms::Label^  labelChangeUDK;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownChangeYear;
	private: System::Windows::Forms::ComboBox^  comboBoxChangeGenre;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownChangeUDK;
	private: System::Windows::Forms::Label^  label1;





	public:

	public:
		array<char>^ mass;

		Library(void)
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
		~Library()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPageAdd;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownAddCount;



	private: System::Windows::Forms::TextBox^  textBoxAddTitle;

	private: System::Windows::Forms::ComboBox^  comboBoxAddAuthor;
	private: System::Windows::Forms::Label^  labelAddCount;
	private: System::Windows::Forms::Label^  labelAddYear;
	private: System::Windows::Forms::Label^  labelAddUDK;


	private: System::Windows::Forms::Label^  labelAddTitle;
	private: System::Windows::Forms::Label^  labelAddAuthor;
	private: System::Windows::Forms::Label^  labelAddMain;
	private: System::Windows::Forms::TabPage^  tabPageChange;
	private: System::Windows::Forms::Button^  buttonSave;




	private: System::Windows::Forms::TextBox^  textBoxChangeTitle;
	private: System::Windows::Forms::TextBox^  textBoxChangeSurname;

	private: System::Windows::Forms::Label^  labelChangeCount;
	private: System::Windows::Forms::Label^  labelChangeYear;

	private: System::Windows::Forms::Label^  labelChangeGenre;
	private: System::Windows::Forms::Label^  labelChangeTitle;
	private: System::Windows::Forms::Label^  labelChangeSurname;

	private: System::Windows::Forms::Button^  buttonGet;
	private: System::Windows::Forms::ComboBox^  comboBoxChangeTitle;
	private: System::Windows::Forms::ComboBox^  comboBoxChangeAuthor;

	protected:

	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		//КОНСТРУКТОР
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Library::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageAdd = (gcnew System::Windows::Forms::TabPage());
			this->labelAddGenre = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBoxAddGenre = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelError = (gcnew System::Windows::Forms::Label());
			this->labelAge = (gcnew System::Windows::Forms::Label());
			this->labelThirdname = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->labelSurname = (gcnew System::Windows::Forms::Label());
			this->numericUpDownAddUDK = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownAddYear = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDownAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxThirdname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->buttonAddPutAuthor = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->numericUpDownAddCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxAddTitle = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxAddAuthor = (gcnew System::Windows::Forms::ComboBox());
			this->labelAddCount = (gcnew System::Windows::Forms::Label());
			this->labelAddYear = (gcnew System::Windows::Forms::Label());
			this->labelAddUDK = (gcnew System::Windows::Forms::Label());
			this->labelAddTitle = (gcnew System::Windows::Forms::Label());
			this->labelAddAuthor = (gcnew System::Windows::Forms::Label());
			this->labelAddMain = (gcnew System::Windows::Forms::Label());
			this->tabPageChange = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownChangeUDK = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownChangeCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelChangeUDK = (gcnew System::Windows::Forms::Label());
			this->numericUpDownChangeYear = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBoxChangeGenre = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDownChangeAge = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxChangeThirdname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxChangeName = (gcnew System::Windows::Forms::TextBox());
			this->labelChangeAge = (gcnew System::Windows::Forms::Label());
			this->labelChangeThirdname = (gcnew System::Windows::Forms::Label());
			this->labelChangeName = (gcnew System::Windows::Forms::Label());
			this->labelError2 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->textBoxChangeTitle = (gcnew System::Windows::Forms::TextBox());
			this->textBoxChangeSurname = (gcnew System::Windows::Forms::TextBox());
			this->labelChangeCount = (gcnew System::Windows::Forms::Label());
			this->labelChangeYear = (gcnew System::Windows::Forms::Label());
			this->labelChangeGenre = (gcnew System::Windows::Forms::Label());
			this->labelChangeTitle = (gcnew System::Windows::Forms::Label());
			this->labelChangeSurname = (gcnew System::Windows::Forms::Label());
			this->buttonGet = (gcnew System::Windows::Forms::Button());
			this->comboBoxChangeTitle = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxChangeAuthor = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPageAdd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAddUDK))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAddYear))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAge))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAddCount))->BeginInit();
			this->tabPageChange->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownChangeUDK))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownChangeCount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownChangeYear))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownChangeAge))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageAdd);
			this->tabControl1->Controls->Add(this->tabPageChange);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(460, 635);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPageAdd
			// 
			this->tabPageAdd->BackColor = System::Drawing::SystemColors::Window;
			this->tabPageAdd->Controls->Add(this->labelAddGenre);
			this->tabPageAdd->Controls->Add(this->label3);
			this->tabPageAdd->Controls->Add(this->comboBoxAddGenre);
			this->tabPageAdd->Controls->Add(this->label2);
			this->tabPageAdd->Controls->Add(this->labelError);
			this->tabPageAdd->Controls->Add(this->labelAge);
			this->tabPageAdd->Controls->Add(this->labelThirdname);
			this->tabPageAdd->Controls->Add(this->labelName);
			this->tabPageAdd->Controls->Add(this->label);
			this->tabPageAdd->Controls->Add(this->labelSurname);
			this->tabPageAdd->Controls->Add(this->numericUpDownAddUDK);
			this->tabPageAdd->Controls->Add(this->numericUpDownAddYear);
			this->tabPageAdd->Controls->Add(this->button1);
			this->tabPageAdd->Controls->Add(this->numericUpDownAge);
			this->tabPageAdd->Controls->Add(this->textBoxThirdname);
			this->tabPageAdd->Controls->Add(this->textBoxName);
			this->tabPageAdd->Controls->Add(this->textBoxSurname);
			this->tabPageAdd->Controls->Add(this->buttonAddPutAuthor);
			this->tabPageAdd->Controls->Add(this->buttonAdd);
			this->tabPageAdd->Controls->Add(this->numericUpDownAddCount);
			this->tabPageAdd->Controls->Add(this->textBoxAddTitle);
			this->tabPageAdd->Controls->Add(this->comboBoxAddAuthor);
			this->tabPageAdd->Controls->Add(this->labelAddCount);
			this->tabPageAdd->Controls->Add(this->labelAddYear);
			this->tabPageAdd->Controls->Add(this->labelAddUDK);
			this->tabPageAdd->Controls->Add(this->labelAddTitle);
			this->tabPageAdd->Controls->Add(this->labelAddAuthor);
			this->tabPageAdd->Controls->Add(this->labelAddMain);
			this->tabPageAdd->Location = System::Drawing::Point(4, 27);
			this->tabPageAdd->Name = L"tabPageAdd";
			this->tabPageAdd->Padding = System::Windows::Forms::Padding(3);
			this->tabPageAdd->Size = System::Drawing::Size(452, 604);
			this->tabPageAdd->TabIndex = 0;
			this->tabPageAdd->Text = L"Добавить";
			// 
			// labelAddGenre
			// 
			this->labelAddGenre->AutoSize = true;
			this->labelAddGenre->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAddGenre->Location = System::Drawing::Point(37, 419);
			this->labelAddGenre->Name = L"labelAddGenre";
			this->labelAddGenre->Size = System::Drawing::Size(84, 35);
			this->labelAddGenre->TabIndex = 34;
			this->labelAddGenre->Text = L"Жанр:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(31, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(224, 30);
			this->label3->TabIndex = 33;
			this->label3->Text = L"(если автора нет в списке, \r\nто внесите данные самостоятельно)";
			// 
			// comboBoxAddGenre
			// 
			this->comboBoxAddGenre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxAddGenre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxAddGenre->FormattingEnabled = true;
			this->comboBoxAddGenre->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"Вестерн", L"Фантастика", L"Фэнтези", L"Детектив",
					L"Драма", L"Искусство", L"Роман", L"Мемуары", L"Ужасы", L"Поэма", L"Пьеса", L"Рассказ", L"Религия", L"Юмор"
			});
			this->comboBoxAddGenre->Location = System::Drawing::Point(136, 423);
			this->comboBoxAddGenre->Name = L"comboBoxAddGenre";
			this->comboBoxAddGenre->Size = System::Drawing::Size(209, 28);
			this->comboBoxAddGenre->TabIndex = 32;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(366, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 18);
			this->label2->TabIndex = 31;
			this->label2->Text = L"label2";
			// 
			// labelError
			// 
			this->labelError->AutoSize = true;
			this->labelError->BackColor = System::Drawing::SystemColors::HighlightText;
			this->labelError->ForeColor = System::Drawing::Color::Red;
			this->labelError->Location = System::Drawing::Point(107, 3);
			this->labelError->Name = L"labelError";
			this->labelError->Size = System::Drawing::Size(339, 18);
			this->labelError->TabIndex = 30;
			this->labelError->Text = L"Поле для вывода сопроводительных надписей";
			// 
			// labelAge
			// 
			this->labelAge->AutoSize = true;
			this->labelAge->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAge->Location = System::Drawing::Point(204, 270);
			this->labelAge->Name = L"labelAge";
			this->labelAge->Size = System::Drawing::Size(245, 35);
			this->labelAge->TabIndex = 29;
			this->labelAge->Text = L"Год рождения автора";
			this->labelAge->Visible = false;
			// 
			// labelThirdname
			// 
			this->labelThirdname->AutoSize = true;
			this->labelThirdname->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelThirdname->Location = System::Drawing::Point(48, 270);
			this->labelThirdname->Name = L"labelThirdname";
			this->labelThirdname->Size = System::Drawing::Size(113, 35);
			this->labelThirdname->TabIndex = 28;
			this->labelThirdname->Text = L"Отчество";
			this->labelThirdname->Visible = false;
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelName->Location = System::Drawing::Point(252, 203);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(146, 35);
			this->labelName->TabIndex = 27;
			this->labelName->Text = L"Имя автора";
			this->labelName->Visible = false;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label->ForeColor = System::Drawing::Color::Coral;
			this->label->Location = System::Drawing::Point(31, 158);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(396, 45);
			this->label->TabIndex = 26;
			this->label->Text = L"Обращаем Ваше внимание на правильный ввод фамилии автора. \r\nСначала введите поряд"
				L"ковый номер автора, затем точку и \r\nполную фамилию автора (БЕЗ ПРОБЕЛОВ).";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label->Visible = false;
			// 
			// labelSurname
			// 
			this->labelSurname->AutoSize = true;
			this->labelSurname->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSurname->Location = System::Drawing::Point(20, 203);
			this->labelSurname->Name = L"labelSurname";
			this->labelSurname->Size = System::Drawing::Size(193, 35);
			this->labelSurname->TabIndex = 25;
			this->labelSurname->Text = L"Номер.Фамилия ";
			this->labelSurname->Visible = false;
			// 
			// numericUpDownAddUDK
			// 
			this->numericUpDownAddUDK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownAddUDK->Location = System::Drawing::Point(136, 461);
			this->numericUpDownAddUDK->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDownAddUDK->Name = L"numericUpDownAddUDK";
			this->numericUpDownAddUDK->Size = System::Drawing::Size(120, 26);
			this->numericUpDownAddUDK->TabIndex = 24;
			// 
			// numericUpDownAddYear
			// 
			this->numericUpDownAddYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownAddYear->Location = System::Drawing::Point(184, 494);
			this->numericUpDownAddYear->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2017, 0, 0, 0 });
			this->numericUpDownAddYear->Name = L"numericUpDownAddYear";
			this->numericUpDownAddYear->Size = System::Drawing::Size(120, 26);
			this->numericUpDownAddYear->TabIndex = 23;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Azure;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(21, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(414, 32);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Добавить автора в список";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Library::button1_Click);
			// 
			// numericUpDownAge
			// 
			this->numericUpDownAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownAge->Location = System::Drawing::Point(258, 308);
			this->numericUpDownAge->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2017, 0, 0, 0 });
			this->numericUpDownAge->Name = L"numericUpDownAge";
			this->numericUpDownAge->Size = System::Drawing::Size(128, 26);
			this->numericUpDownAge->TabIndex = 19;
			this->numericUpDownAge->Visible = false;
			// 
			// textBoxThirdname
			// 
			this->textBoxThirdname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxThirdname->Location = System::Drawing::Point(21, 308);
			this->textBoxThirdname->Name = L"textBoxThirdname";
			this->textBoxThirdname->Size = System::Drawing::Size(189, 26);
			this->textBoxThirdname->TabIndex = 17;
			this->textBoxThirdname->Visible = false;
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxName->Location = System::Drawing::Point(220, 241);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(215, 26);
			this->textBoxName->TabIndex = 16;
			this->textBoxName->Visible = false;
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSurname->Location = System::Drawing::Point(24, 241);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(189, 26);
			this->textBoxSurname->TabIndex = 15;
			this->textBoxSurname->Visible = false;
			// 
			// buttonAddPutAuthor
			// 
			this->buttonAddPutAuthor->BackColor = System::Drawing::Color::Bisque;
			this->buttonAddPutAuthor->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAddPutAuthor->ImageKey = L"(отсутствует)";
			this->buttonAddPutAuthor->Location = System::Drawing::Point(302, 109);
			this->buttonAddPutAuthor->Name = L"buttonAddPutAuthor";
			this->buttonAddPutAuthor->Size = System::Drawing::Size(133, 36);
			this->buttonAddPutAuthor->TabIndex = 13;
			this->buttonAddPutAuthor->Text = L"Ввести автора";
			this->buttonAddPutAuthor->UseVisualStyleBackColor = false;
			this->buttonAddPutAuthor->Click += gcnew System::EventHandler(this, &Library::buttonAddPutAuthor_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::Azure;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(21, 563);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(414, 35);
			this->buttonAdd->TabIndex = 12;
			this->buttonAdd->Text = L"Добавить книгу в архив";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Library::buttonAdd_Click);
			// 
			// numericUpDownAddCount
			// 
			this->numericUpDownAddCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownAddCount->Location = System::Drawing::Point(167, 530);
			this->numericUpDownAddCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDownAddCount->Name = L"numericUpDownAddCount";
			this->numericUpDownAddCount->Size = System::Drawing::Size(120, 26);
			this->numericUpDownAddCount->TabIndex = 11;
			// 
			// textBoxAddTitle
			// 
			this->textBoxAddTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxAddTitle->Location = System::Drawing::Point(136, 388);
			this->textBoxAddTitle->Name = L"textBoxAddTitle";
			this->textBoxAddTitle->Size = System::Drawing::Size(291, 26);
			this->textBoxAddTitle->TabIndex = 8;
			// 
			// comboBoxAddAuthor
			// 
			this->comboBoxAddAuthor->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->comboBoxAddAuthor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxAddAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxAddAuthor->FormattingEnabled = true;
			this->comboBoxAddAuthor->Location = System::Drawing::Point(21, 75);
			this->comboBoxAddAuthor->Name = L"comboBoxAddAuthor";
			this->comboBoxAddAuthor->Size = System::Drawing::Size(414, 28);
			this->comboBoxAddAuthor->TabIndex = 6;
			// 
			// labelAddCount
			// 
			this->labelAddCount->AutoSize = true;
			this->labelAddCount->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAddCount->Location = System::Drawing::Point(20, 525);
			this->labelAddCount->Name = L"labelAddCount";
			this->labelAddCount->Size = System::Drawing::Size(141, 35);
			this->labelAddCount->TabIndex = 5;
			this->labelAddCount->Text = L"Количество:";
			// 
			// labelAddYear
			// 
			this->labelAddYear->AutoSize = true;
			this->labelAddYear->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAddYear->Location = System::Drawing::Point(19, 489);
			this->labelAddYear->Name = L"labelAddYear";
			this->labelAddYear->Size = System::Drawing::Size(159, 35);
			this->labelAddYear->TabIndex = 4;
			this->labelAddYear->Text = L"Год издания:";
			// 
			// labelAddUDK
			// 
			this->labelAddUDK->AutoSize = true;
			this->labelAddUDK->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAddUDK->Location = System::Drawing::Point(37, 456);
			this->labelAddUDK->Name = L"labelAddUDK";
			this->labelAddUDK->Size = System::Drawing::Size(76, 35);
			this->labelAddUDK->TabIndex = 3;
			this->labelAddUDK->Text = L"UDK:";
			// 
			// labelAddTitle
			// 
			this->labelAddTitle->AutoSize = true;
			this->labelAddTitle->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAddTitle->Location = System::Drawing::Point(19, 384);
			this->labelAddTitle->Name = L"labelAddTitle";
			this->labelAddTitle->Size = System::Drawing::Size(117, 35);
			this->labelAddTitle->TabIndex = 2;
			this->labelAddTitle->Text = L"Название:";
			// 
			// labelAddAuthor
			// 
			this->labelAddAuthor->AutoSize = true;
			this->labelAddAuthor->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAddAuthor->Location = System::Drawing::Point(15, 38);
			this->labelAddAuthor->Name = L"labelAddAuthor";
			this->labelAddAuthor->Size = System::Drawing::Size(306, 35);
			this->labelAddAuthor->TabIndex = 1;
			this->labelAddAuthor->Text = L"Выберите автора из списка:";
			// 
			// labelAddMain
			// 
			this->labelAddMain->AutoSize = true;
			this->labelAddMain->Font = (gcnew System::Drawing::Font(L"ScriptC", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddMain->Location = System::Drawing::Point(14, 7);
			this->labelAddMain->Name = L"labelAddMain";
			this->labelAddMain->Size = System::Drawing::Size(283, 40);
			this->labelAddMain->TabIndex = 0;
			this->labelAddMain->Text = L"Заполните поля книги";
			// 
			// tabPageChange
			// 
			this->tabPageChange->Controls->Add(this->label1);
			this->tabPageChange->Controls->Add(this->numericUpDownChangeUDK);
			this->tabPageChange->Controls->Add(this->numericUpDownChangeCount);
			this->tabPageChange->Controls->Add(this->labelChangeUDK);
			this->tabPageChange->Controls->Add(this->numericUpDownChangeYear);
			this->tabPageChange->Controls->Add(this->comboBoxChangeGenre);
			this->tabPageChange->Controls->Add(this->numericUpDownChangeAge);
			this->tabPageChange->Controls->Add(this->textBoxChangeThirdname);
			this->tabPageChange->Controls->Add(this->textBoxChangeName);
			this->tabPageChange->Controls->Add(this->labelChangeAge);
			this->tabPageChange->Controls->Add(this->labelChangeThirdname);
			this->tabPageChange->Controls->Add(this->labelChangeName);
			this->tabPageChange->Controls->Add(this->labelError2);
			this->tabPageChange->Controls->Add(this->buttonSave);
			this->tabPageChange->Controls->Add(this->textBoxChangeTitle);
			this->tabPageChange->Controls->Add(this->textBoxChangeSurname);
			this->tabPageChange->Controls->Add(this->labelChangeCount);
			this->tabPageChange->Controls->Add(this->labelChangeYear);
			this->tabPageChange->Controls->Add(this->labelChangeGenre);
			this->tabPageChange->Controls->Add(this->labelChangeTitle);
			this->tabPageChange->Controls->Add(this->labelChangeSurname);
			this->tabPageChange->Controls->Add(this->buttonGet);
			this->tabPageChange->Controls->Add(this->comboBoxChangeTitle);
			this->tabPageChange->Controls->Add(this->comboBoxChangeAuthor);
			this->tabPageChange->Location = System::Drawing::Point(4, 27);
			this->tabPageChange->Name = L"tabPageChange";
			this->tabPageChange->Padding = System::Windows::Forms::Padding(3);
			this->tabPageChange->Size = System::Drawing::Size(452, 604);
			this->tabPageChange->TabIndex = 1;
			this->tabPageChange->Text = L"Редактировать";
			this->tabPageChange->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Coral;
			this->label1->Location = System::Drawing::Point(101, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(334, 30);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Выберите из списка АВТОРА, затем НАЗВАНИЕ КНИГИ. \r\nПосле отредактируйте необходим"
				L"ые поля.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// numericUpDownChangeUDK
			// 
			this->numericUpDownChangeUDK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownChangeUDK->Location = System::Drawing::Point(128, 420);
			this->numericUpDownChangeUDK->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDownChangeUDK->Name = L"numericUpDownChangeUDK";
			this->numericUpDownChangeUDK->Size = System::Drawing::Size(132, 26);
			this->numericUpDownChangeUDK->TabIndex = 25;
			// 
			// numericUpDownChangeCount
			// 
			this->numericUpDownChangeCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownChangeCount->Location = System::Drawing::Point(171, 495);
			this->numericUpDownChangeCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDownChangeCount->Name = L"numericUpDownChangeCount";
			this->numericUpDownChangeCount->Size = System::Drawing::Size(147, 26);
			this->numericUpDownChangeCount->TabIndex = 24;
			// 
			// labelChangeUDK
			// 
			this->labelChangeUDK->AutoSize = true;
			this->labelChangeUDK->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChangeUDK->Location = System::Drawing::Point(24, 420);
			this->labelChangeUDK->Name = L"labelChangeUDK";
			this->labelChangeUDK->Size = System::Drawing::Size(66, 35);
			this->labelChangeUDK->TabIndex = 23;
			this->labelChangeUDK->Text = L"UDK";
			// 
			// numericUpDownChangeYear
			// 
			this->numericUpDownChangeYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownChangeYear->Location = System::Drawing::Point(171, 455);
			this->numericUpDownChangeYear->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2017, 0, 0, 0 });
			this->numericUpDownChangeYear->Name = L"numericUpDownChangeYear";
			this->numericUpDownChangeYear->Size = System::Drawing::Size(148, 26);
			this->numericUpDownChangeYear->TabIndex = 22;
			// 
			// comboBoxChangeGenre
			// 
			this->comboBoxChangeGenre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxChangeGenre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxChangeGenre->FormattingEnabled = true;
			this->comboBoxChangeGenre->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"Вестерн", L"Фантастика", L"Фэнтези",
					L"Детектив", L"Драма", L"Искусство", L"Роман", L"Мемуары", L"Ужасы", L"Поэма", L"Пьеса", L"Рассказ", L"Религия", L"Юмор"
			});
			this->comboBoxChangeGenre->Location = System::Drawing::Point(128, 380);
			this->comboBoxChangeGenre->Name = L"comboBoxChangeGenre";
			this->comboBoxChangeGenre->Size = System::Drawing::Size(236, 28);
			this->comboBoxChangeGenre->TabIndex = 21;
			// 
			// numericUpDownChangeAge
			// 
			this->numericUpDownChangeAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownChangeAge->Location = System::Drawing::Point(171, 286);
			this->numericUpDownChangeAge->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2017, 0, 0, 0 });
			this->numericUpDownChangeAge->Name = L"numericUpDownChangeAge";
			this->numericUpDownChangeAge->Size = System::Drawing::Size(148, 26);
			this->numericUpDownChangeAge->TabIndex = 20;
			// 
			// textBoxChangeThirdname
			// 
			this->textBoxChangeThirdname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxChangeThirdname->Location = System::Drawing::Point(133, 242);
			this->textBoxChangeThirdname->Name = L"textBoxChangeThirdname";
			this->textBoxChangeThirdname->Size = System::Drawing::Size(308, 26);
			this->textBoxChangeThirdname->TabIndex = 19;
			// 
			// textBoxChangeName
			// 
			this->textBoxChangeName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxChangeName->Location = System::Drawing::Point(133, 210);
			this->textBoxChangeName->Name = L"textBoxChangeName";
			this->textBoxChangeName->Size = System::Drawing::Size(308, 26);
			this->textBoxChangeName->TabIndex = 18;
			// 
			// labelChangeAge
			// 
			this->labelChangeAge->AutoSize = true;
			this->labelChangeAge->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChangeAge->Location = System::Drawing::Point(11, 281);
			this->labelChangeAge->Name = L"labelChangeAge";
			this->labelChangeAge->Size = System::Drawing::Size(163, 35);
			this->labelChangeAge->TabIndex = 17;
			this->labelChangeAge->Text = L"Год рождения";
			// 
			// labelChangeThirdname
			// 
			this->labelChangeThirdname->AutoSize = true;
			this->labelChangeThirdname->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChangeThirdname->Location = System::Drawing::Point(11, 238);
			this->labelChangeThirdname->Name = L"labelChangeThirdname";
			this->labelChangeThirdname->Size = System::Drawing::Size(113, 35);
			this->labelChangeThirdname->TabIndex = 16;
			this->labelChangeThirdname->Text = L"Отчество";
			// 
			// labelChangeName
			// 
			this->labelChangeName->AutoSize = true;
			this->labelChangeName->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChangeName->Location = System::Drawing::Point(24, 203);
			this->labelChangeName->Name = L"labelChangeName";
			this->labelChangeName->Size = System::Drawing::Size(64, 35);
			this->labelChangeName->TabIndex = 15;
			this->labelChangeName->Text = L"Имя";
			// 
			// labelError2
			// 
			this->labelError2->AutoSize = true;
			this->labelError2->ForeColor = System::Drawing::Color::Red;
			this->labelError2->Location = System::Drawing::Point(6, 3);
			this->labelError2->Name = L"labelError2";
			this->labelError2->Size = System::Drawing::Size(339, 18);
			this->labelError2->TabIndex = 14;
			this->labelError2->Text = L"Поле для вывода сопроводительных надписей";
			// 
			// buttonSave
			// 
			this->buttonSave->BackColor = System::Drawing::Color::Azure;
			this->buttonSave->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSave->Location = System::Drawing::Point(17, 547);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(413, 33);
			this->buttonSave->TabIndex = 13;
			this->buttonSave->Text = L"Сохранить изменения";
			this->buttonSave->UseVisualStyleBackColor = false;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Library::buttonSave_Click);
			// 
			// textBoxChangeTitle
			// 
			this->textBoxChangeTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxChangeTitle->Location = System::Drawing::Point(132, 336);
			this->textBoxChangeTitle->Name = L"textBoxChangeTitle";
			this->textBoxChangeTitle->Size = System::Drawing::Size(308, 26);
			this->textBoxChangeTitle->TabIndex = 9;
			// 
			// textBoxChangeSurname
			// 
			this->textBoxChangeSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxChangeSurname->Location = System::Drawing::Point(133, 172);
			this->textBoxChangeSurname->Name = L"textBoxChangeSurname";
			this->textBoxChangeSurname->Size = System::Drawing::Size(308, 26);
			this->textBoxChangeSurname->TabIndex = 8;
			// 
			// labelChangeCount
			// 
			this->labelChangeCount->AutoSize = true;
			this->labelChangeCount->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChangeCount->Location = System::Drawing::Point(11, 490);
			this->labelChangeCount->Name = L"labelChangeCount";
			this->labelChangeCount->Size = System::Drawing::Size(141, 35);
			this->labelChangeCount->TabIndex = 7;
			this->labelChangeCount->Text = L"Количество:";
			// 
			// labelChangeYear
			// 
			this->labelChangeYear->AutoSize = true;
			this->labelChangeYear->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChangeYear->Location = System::Drawing::Point(9, 455);
			this->labelChangeYear->Name = L"labelChangeYear";
			this->labelChangeYear->Size = System::Drawing::Size(159, 35);
			this->labelChangeYear->TabIndex = 6;
			this->labelChangeYear->Text = L"Год издания:";
			// 
			// labelChangeGenre
			// 
			this->labelChangeGenre->AutoSize = true;
			this->labelChangeGenre->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChangeGenre->Location = System::Drawing::Point(24, 376);
			this->labelChangeGenre->Name = L"labelChangeGenre";
			this->labelChangeGenre->Size = System::Drawing::Size(84, 35);
			this->labelChangeGenre->TabIndex = 5;
			this->labelChangeGenre->Text = L"Жанр:";
			// 
			// labelChangeTitle
			// 
			this->labelChangeTitle->AutoSize = true;
			this->labelChangeTitle->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChangeTitle->Location = System::Drawing::Point(9, 332);
			this->labelChangeTitle->Name = L"labelChangeTitle";
			this->labelChangeTitle->Size = System::Drawing::Size(117, 35);
			this->labelChangeTitle->TabIndex = 4;
			this->labelChangeTitle->Text = L"Название:";
			// 
			// labelChangeSurname
			// 
			this->labelChangeSurname->AutoSize = true;
			this->labelChangeSurname->Font = (gcnew System::Drawing::Font(L"ScriptC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChangeSurname->Location = System::Drawing::Point(11, 168);
			this->labelChangeSurname->Name = L"labelChangeSurname";
			this->labelChangeSurname->Size = System::Drawing::Size(118, 35);
			this->labelChangeSurname->TabIndex = 3;
			this->labelChangeSurname->Text = L"Фамилия:";
			// 
			// buttonGet
			// 
			this->buttonGet->BackColor = System::Drawing::Color::Bisque;
			this->buttonGet->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGet->Location = System::Drawing::Point(265, 81);
			this->buttonGet->Name = L"buttonGet";
			this->buttonGet->Size = System::Drawing::Size(165, 69);
			this->buttonGet->TabIndex = 2;
			this->buttonGet->Text = L"Получить \r\nинформацию";
			this->buttonGet->UseVisualStyleBackColor = false;
			this->buttonGet->Click += gcnew System::EventHandler(this, &Library::buttonGet_Click);
			// 
			// comboBoxChangeTitle
			// 
			this->comboBoxChangeTitle->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxChangeTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxChangeTitle->FormattingEnabled = true;
			this->comboBoxChangeTitle->Location = System::Drawing::Point(17, 120);
			this->comboBoxChangeTitle->Name = L"comboBoxChangeTitle";
			this->comboBoxChangeTitle->Size = System::Drawing::Size(231, 28);
			this->comboBoxChangeTitle->TabIndex = 1;
			// 
			// comboBoxChangeAuthor
			// 
			this->comboBoxChangeAuthor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxChangeAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxChangeAuthor->FormattingEnabled = true;
			this->comboBoxChangeAuthor->Location = System::Drawing::Point(17, 81);
			this->comboBoxChangeAuthor->Name = L"comboBoxChangeAuthor";
			this->comboBoxChangeAuthor->Size = System::Drawing::Size(231, 28);
			this->comboBoxChangeAuthor->TabIndex = 0;
			this->comboBoxChangeAuthor->SelectedIndexChanged += gcnew System::EventHandler(this, &Library::comboBoxChangeAuthor_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(12, 649);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(460, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сохранение и выход";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Library::button2_Click);
			// 
			// Library
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(484, 688);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->MaximumSize = System::Drawing::Size(500, 726);
			this->MinimumSize = System::Drawing::Size(500, 726);
			this->Name = L"Library";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Помощник библиотекаря";
			this->Load += gcnew System::EventHandler(this, &Library::Library_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPageAdd->ResumeLayout(false);
			this->tabPageAdd->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAddUDK))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAddYear))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAge))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAddCount))->EndInit();
			this->tabPageChange->ResumeLayout(false);
			this->tabPageChange->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownChangeUDK))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownChangeCount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownChangeYear))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownChangeAge))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		// обработчик события - нажатие на кнопку "Добавить книгу в архив" (т.е. проверить поля, создать объект и поместить в хранилище (вызвать метод из GeneralController))
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 int id;
				 int UDK;
				 int Year;
				 int count;
				 string title;
				 String^ kk;
				 string genre;
				 // проверка на случай незаполненных полей
				 if ((comboBoxAddAuthor->Text == "") || (textBoxAddTitle->Text == "") || (numericUpDownAddUDK->Text == "0") ||
					 (numericUpDownAddYear->Text == "0") || (numericUpDownAddCount->Text == "") || (comboBoxAddGenre->Text == ""))
					 labelError->Text = "Не введено значение";
				 else{
					 UDK = Convert::ToInt32(numericUpDownAddUDK->Text);
					 Year = Convert::ToInt32(numericUpDownAddYear->Text);
					 count = Convert::ToInt32(numericUpDownAddCount->Text);
					 // преобразует Title (String^ в string)
					 title = GeneralController::SysToStd(textBoxAddTitle->Text);
					 kk = GeneralController::StdToSys(title);

					 genre = GeneralController::SysToStd(comboBoxAddGenre->Text);
					 // взять id до точки, чтобы передать в хранилище
					 id = GeneralController::StringConvertToInt(comboBoxAddAuthor->Text);
					 // добавление книги в коллекцию
					 GeneralController::addBook(title, genre, id, UDK, count, Year);
					 labelError->Text = "Книга добавлена в архив (id автора = " + Convert::ToString(id) + ")";
					 GeneralController::addAuthor(id, GeneralController::SysToStd(textBoxName->Text), GeneralController::SysToStd(textBoxSurname->Text),
						 GeneralController::SysToStd(textBoxThirdname->Text), Convert::ToInt32(numericUpDownAge->Text));
				 }
	}

			 // обработчик события - нажатие на кнопку "Ввести автора" (т.е.сделать скрытые элементы видимыми)
	private: System::Void buttonAddPutAuthor_Click(System::Object^  sender, System::EventArgs^  e) {
				 label->Visible = true;
				 labelSurname->Visible = true;
				 labelName->Visible = true;
				 labelThirdname->Visible = true;
				 labelAge->Visible = true;
				 textBoxName->Visible = true;
				 textBoxSurname->Visible = true;
				 textBoxThirdname->Visible = true;
				 numericUpDownAge->Visible = true;
				 button1->Visible = true;

	}

			 // обработчик события - нажатие на кнопку "Добавить автора в список" (т.е. выполнить проверку полей и добавить информацию об авторе в выпадающий список)
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ test;
				 if ((numericUpDownAge->Text != "0") && (textBoxSurname->Text != "") && (textBoxName->Text != "") && (textBoxThirdname->Text != "")){
					 test = textBoxSurname->Text + textBoxName->Text[0] + textBoxThirdname->Text[0] + numericUpDownAge->Text;
					 comboBoxAddAuthor->Items->Add(test);
					 labelError->Text = "Автор добавлен, выберите из списка";
				 }
				 else labelError->Text = "Не введено значение";

	}

			 // обработчик выпадающего списка (т.е. исходя из выбранного значения выпадающего списка ищутся значения во втором списке (по id автора в первом списке ищются книги во втором списке, которые соответствуют этому id))
	private: System::Void comboBoxChangeAuthor_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 int id = GeneralController::StringConvertToInt(comboBoxChangeAuthor->Text);
				 while (!storageBook.isEmpty()){
					 Book _book = storageBook.pop();
					 if (_book.authorId == id){
						 String^ test = GeneralController::StdToSys(_book.title);
						 comboBoxChangeTitle->Items->Add(test);
					 }
				 }
	}

			 // обработчик события - нажатие на кнопку "Получить информацию" (т.е. на основе выбранной информации в списке выбрать оставшуюся информацию и вывести на экран (т.е. по id, который выбран в первом списке (см. выше), выбрать книгу и всю информацию о ней)
	private: System::Void buttonGet_Click(System::Object^  sender, System::EventArgs^  e) {
				 int id = GeneralController::StringConvertToInt(comboBoxChangeAuthor->Text);
				 Author _author;
				 Book _book;
				 while (storageAuthor.isEmpty()){
					 _author = storageAuthor.popDown();
					 if (_author.id == id){
						 textBoxChangeSurname->Text = GeneralController::StdToSys(_author.surname);
						 textBoxChangeName->Text = GeneralController::StdToSys(_author.name);
						 textBoxChangeThirdname->Text = GeneralController::StdToSys(_author.thirdname);
						 numericUpDownChangeAge->Text = Convert::ToString(_author.date);
					 }
				 }
				 while (storageBook.isEmpty()){
					 _book = storageBook.popDown();
					 if (_book.authorId == id){
						 textBoxChangeTitle->Text = GeneralController::StdToSys(_book.title);
						 comboBoxChangeGenre->Text = GeneralController::StdToSys(_book.genre);
						 numericUpDownChangeUDK->Text = Convert::ToString(_book.UDK);
						 numericUpDownChangeYear->Text = Convert::ToString(_book.year);
						 numericUpDownChangeCount->Text = Convert::ToString(_book.count);
					 }
				 }
	}

			 // обработчик события - нажатие на кнопку "Сохранить и выйти" (т.е. сохранение из архивов в файлы и выход из программы)
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 GeneralController::saveBook();
				 GeneralController::saveAuthor();
				 labelError->Text = "Книги сохранены в хранилище";
				 _sleep(1000);
				 exit(0);
	}

			 // обработчик события - загрузка формы Library (т.е. как только загружается форма данные из файлов будут считанны и помещены в хранилища и в необходимые элементы)
	private: System::Void Library_Load(System::Object^  sender, System::EventArgs^  e) {
				 GeneralController::loadBook();
				 labelError->Text = "Книги выгружены из хранилища";
				 GeneralController::loadAuthor();
				 Author __author;
				 String^ test;
				 while (!storageAuthor.isEmpty()){
					 __author = storageAuthor.pop();
					 test = GeneralController::StdToSys(__author.surname) + Convert::ToInt32(__author.date);
					 comboBoxAddAuthor->Items->Add(test);
					 comboBoxChangeAuthor->Items->Add(test);
				 }
	}

			 // обработчик события - нажатие на кнопку "Сохранить изменения" (т.е. все измененные данные будут помещены в хранилище)
	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
				 Book* pBook;
				 Author* pAuthor;
				 int id;
				 string name;
				 string surname;
				 string thirdname;
				 int age;
				 string genre;
				 string title;
				 int Udk;
				 int year;
				 int count;
				 if ((textBoxChangeSurname->Text != "") || (textBoxChangeName->Text != "") || (textBoxChangeThirdname->Text != "") || (numericUpDownChangeAge->Text != "0")
					 || (textBoxChangeTitle->Text != "") || (comboBoxChangeGenre->Text != "") || (numericUpDownChangeUDK->Text != "0") || (numericUpDownChangeYear->Text != "0") || (numericUpDownChangeCount->Text != "0")){
					 id = GeneralController::StringConvertToInt(textBoxChangeSurname->Text);
					 name = GeneralController::SysToStd(textBoxChangeName->Text);
					 surname = GeneralController::SysToStd(textBoxChangeSurname->Text);
					 thirdname = GeneralController::SysToStd(textBoxChangeThirdname->Text);
					 age = Convert::ToInt32(numericUpDownChangeAge->Text);
					 genre = GeneralController::SysToStd(comboBoxChangeGenre->Text);
					 title = GeneralController::SysToStd(textBoxChangeTitle->Text);
					 Udk = Convert::ToInt32(numericUpDownChangeUDK->Text);
					 year = Convert::ToInt32(numericUpDownChangeYear->Text);
					 count = Convert::ToInt32(numericUpDownChangeCount->Text);
					 pBook = new Book(title, genre, id, Udk, count, year);
					 pAuthor = new Author(id, name, surname, thirdname, age);
					 storageBook.push(*pBook);
					 storageAuthor.push(*pAuthor);
					 labelError2->Text = "Книга отредактирована  " + textBoxChangeSurname->Text + "  '" + textBoxChangeTitle->Text + "'";
				 }
				 else{
					 labelError2->Text = "Не введено значение";
				 }
	}
	};
}
