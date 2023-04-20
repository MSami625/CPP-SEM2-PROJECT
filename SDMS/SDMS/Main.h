#pragma once



namespace SDMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}

		String^ G;
		String^ Y;
		String^ S;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label6;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;






	private: System::Windows::Forms::DataGridView^ data;






	private: System::Windows::Forms::Button^ submit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ sprog;
	private: System::Windows::Forms::DateTimePicker^ sdob;
	private: System::Windows::Forms::TextBox^ sroll;
	private: System::Windows::Forms::TextBox^ sname;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ roll;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ program;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dob;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ passed;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox2;















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->data = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->roll = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->program = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dob = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->passed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sprog = (gcnew System::Windows::Forms::TextBox());
			this->sdob = (gcnew System::Windows::Forms::DateTimePicker());
			this->sroll = (gcnew System::Windows::Forms::TextBox());
			this->sname = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(46, 190);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->label3->Size = System::Drawing::Size(208, 39);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Student Name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiCondensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(470, 70);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(2);
			this->label2->Size = System::Drawing::Size(353, 34);
			this->label2->TabIndex = 7;
			this->label2->Text = L"       Type in the details of Students      ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(46, 263);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->label4->Size = System::Drawing::Size(238, 39);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Student Roll No.  :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(46, 337);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->label5->Size = System::Drawing::Size(243, 39);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Student Program :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(742, 186);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->label6->Size = System::Drawing::Size(195, 39);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Student DOB  :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(13, 18);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(0, 0, 0, 10);
			this->label7->Size = System::Drawing::Size(189, 44);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Student Year :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(15, 18);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->label8->Size = System::Drawing::Size(258, 39);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Passed Prev. Sem. :";
			// 
			// data
			// 
			this->data->AllowUserToAddRows = false;
			this->data->AllowUserToDeleteRows = false;
			this->data->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->data->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->data->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Name, this->Gender,
					this->roll, this->program, this->dob, this->year, this->passed
			});
			this->data->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->data->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->data->Location = System::Drawing::Point(0, 662);
			this->data->Name = L"data";
			this->data->ReadOnly = true;
			this->data->RowHeadersWidth = 51;
			this->data->RowTemplate->Height = 24;
			this->data->Size = System::Drawing::Size(1271, 240);
			this->data->StandardTab = true;
			this->data->TabIndex = 29;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Student Name";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			// 
			// Gender
			// 
			this->Gender->HeaderText = L"Gender";
			this->Gender->MinimumWidth = 6;
			this->Gender->Name = L"Gender";
			this->Gender->ReadOnly = true;
			// 
			// roll
			// 
			this->roll->HeaderText = L"Student Roll No.";
			this->roll->MinimumWidth = 6;
			this->roll->Name = L"roll";
			this->roll->ReadOnly = true;
			// 
			// program
			// 
			this->program->HeaderText = L"Student Program";
			this->program->MinimumWidth = 6;
			this->program->Name = L"program";
			this->program->ReadOnly = true;
			// 
			// dob
			// 
			this->dob->HeaderText = L"Student DOB";
			this->dob->MinimumWidth = 6;
			this->dob->Name = L"dob";
			this->dob->ReadOnly = true;
			// 
			// year
			// 
			this->year->HeaderText = L"Year";
			this->year->MinimumWidth = 6;
			this->year->Name = L"year";
			this->year->ReadOnly = true;
			// 
			// passed
			// 
			this->passed->HeaderText = L"Passed Previous Sem.";
			this->passed->MinimumWidth = 6;
			this->passed->Name = L"passed";
			this->passed->ReadOnly = true;
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::SystemColors::Highlight;
			this->submit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->submit->FlatAppearance->BorderColor = System::Drawing::SystemColors::Highlight;
			this->submit->FlatAppearance->BorderSize = 2;
			this->submit->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->submit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"submit.Image")));
			this->submit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->submit->Location = System::Drawing::Point(570, 510);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(213, 71);
			this->submit->TabIndex = 15;
			this->submit->Text = L"Submit";
			this->submit->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &Main::submit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Highlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(520, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 57);
			this->label1->TabIndex = 6;
			this->label1->Text = L"WELCOME";
			// 
			// sprog
			// 
			this->sprog->AcceptsReturn = true;
			this->sprog->BackColor = System::Drawing::Color::WhiteSmoke;
			this->sprog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sprog->ForeColor = System::Drawing::Color::Black;
			this->sprog->Location = System::Drawing::Point(309, 342);
			this->sprog->Name = L"sprog";
			this->sprog->Size = System::Drawing::Size(373, 30);
			this->sprog->TabIndex = 12;
			// 
			// sdob
			// 
			this->sdob->CalendarFont = (gcnew System::Drawing::Font(L"Bahnschrift", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sdob->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sdob->Location = System::Drawing::Point(961, 190);
			this->sdob->MaxDate = System::DateTime(3000, 12, 31, 0, 0, 0, 0);
			this->sdob->Name = L"sdob";
			this->sdob->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->sdob->Size = System::Drawing::Size(245, 28);
			this->sdob->TabIndex = 14;
			// 
			// sroll
			// 
			this->sroll->AcceptsReturn = true;
			this->sroll->BackColor = System::Drawing::Color::WhiteSmoke;
			this->sroll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sroll->ForeColor = System::Drawing::Color::Black;
			this->sroll->Location = System::Drawing::Point(304, 265);
			this->sroll->Name = L"sroll";
			this->sroll->Size = System::Drawing::Size(378, 30);
			this->sroll->TabIndex = 9;
			// 
			// sname
			// 
			this->sname->AcceptsReturn = true;
			this->sname->BackColor = System::Drawing::Color::WhiteSmoke;
			this->sname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sname->ForeColor = System::Drawing::Color::Black;
			this->sname->Location = System::Drawing::Point(274, 194);
			this->sname->Name = L"sname";
			this->sname->Size = System::Drawing::Size(408, 30);
			this->sname->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(1225, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 40);
			this->button2->TabIndex = 13;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Red;
			this->button3->Location = System::Drawing::Point(1179, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 16;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(15, 15);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->label9->Size = System::Drawing::Size(120, 39);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Gender :";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->radioButton6->Location = System::Drawing::Point(166, 14);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Padding = System::Windows::Forms::Padding(10, 10, 10, 5);
			this->radioButton6->Size = System::Drawing::Size(107, 40);
			this->radioButton6->TabIndex = 31;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Male    ";
			this->radioButton6->UseVisualStyleBackColor = false;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton6_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton7->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->radioButton7->Location = System::Drawing::Point(300, 14);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Padding = System::Windows::Forms::Padding(10, 10, 10, 5);
			this->radioButton7->Size = System::Drawing::Size(108, 40);
			this->radioButton7->TabIndex = 32;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Female";
			this->radioButton7->UseVisualStyleBackColor = false;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton8->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->radioButton8->Location = System::Drawing::Point(300, 17);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Padding = System::Windows::Forms::Padding(10, 10, 10, 5);
			this->radioButton8->Size = System::Drawing::Size(77, 40);
			this->radioButton8->TabIndex = 33;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Yes";
			this->radioButton8->UseVisualStyleBackColor = false;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton8_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton9->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->radioButton9->Location = System::Drawing::Point(401, 17);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Padding = System::Windows::Forms::Padding(10, 10, 10, 5);
			this->radioButton9->Size = System::Drawing::Size(72, 40);
			this->radioButton9->TabIndex = 34;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"No";
			this->radioButton9->UseVisualStyleBackColor = false;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton9_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->radioButton2->Location = System::Drawing::Point(309, 18);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Padding = System::Windows::Forms::Padding(10);
			this->radioButton2->Size = System::Drawing::Size(78, 45);
			this->radioButton2->TabIndex = 23;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"2nd";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->radioButton3->Location = System::Drawing::Point(406, 18);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Padding = System::Windows::Forms::Padding(10);
			this->radioButton3->Size = System::Drawing::Size(76, 45);
			this->radioButton3->TabIndex = 24;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"3rd";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton3_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->radioButton5->Location = System::Drawing::Point(591, 18);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Padding = System::Windows::Forms::Padding(10);
			this->radioButton5->Size = System::Drawing::Size(75, 45);
			this->radioButton5->TabIndex = 26;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"5th";
			this->radioButton5->UseVisualStyleBackColor = false;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->radioButton4->Location = System::Drawing::Point(498, 18);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Padding = System::Windows::Forms::Padding(10);
			this->radioButton4->Size = System::Drawing::Size(76, 45);
			this->radioButton4->TabIndex = 25;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"4th";
			this->radioButton4->UseVisualStyleBackColor = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton4_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton1->Location = System::Drawing::Point(221, 18);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Padding = System::Windows::Forms::Padding(10);
			this->radioButton1->Size = System::Drawing::Size(72, 45);
			this->radioButton1->TabIndex = 16;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1st";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Main::radioButton1_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(33, 409);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(682, 73);
			this->groupBox1->TabIndex = 35;
			this->groupBox1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->radioButton8);
			this->groupBox3->Controls->Add(this->radioButton9);
			this->groupBox3->Location = System::Drawing::Point(733, 337);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(486, 66);
			this->groupBox3->TabIndex = 37;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Highlight;
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox4->Location = System::Drawing::Point(0, -11);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1271, 134);
			this->groupBox4->TabIndex = 38;
			this->groupBox4->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Location = System::Drawing::Point(733, 250);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(486, 66);
			this->groupBox2->TabIndex = 39;
			this->groupBox2->TabStop = false;
			// 
			// Main
			// 
			this->AcceptButton = this->submit;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1271, 902);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->data);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->sname);
			this->Controls->Add(this->sroll);
			this->Controls->Add(this->sdob);
			this->Controls->Add(this->sprog);
			this->Controls->Add(this->submit);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1271, 902);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1271, 902);
			
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SDMS | DASHBOARD";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		  
	

		

private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {
	data->Rows->Add(sname->Text,G, sroll->Text, sprog->Text, sdob->Text,Y ,S);
	sname->Clear();
	sroll->Clear();
	sprog->Clear();
	MessageBox::Show("|| Saved Student Details Succesfully ||");
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			this,
			"Do you want to Exit SDMS Application?",
			"Press Yes or No!",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
		
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}



private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Y = "2nd";
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Y = "1st";
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Y = "3rd";
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Y = "4th";
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Y = "5th";
}
private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	S = "Yes";
}
private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	S = "No";
}

private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	G = "Male";
}
private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	G = "Female";
}
};
}
