#pragma once
#include<math.h>
#include <string>
#include <vector>
#include <locale.h>

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1423, 658);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Wheat;
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1407, 611);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(536, 103);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(378, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SeaShell;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(893, 501);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(261, 71);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SeaShell;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(262, 501);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(261, 71);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(548, 402);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(229, 31);
			this->textBox2->TabIndex = 28;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(548, 285);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(229, 31);
			this->textBox1->TabIndex = 27;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(95, 385);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(428, 51);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Відповідне значення у";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(396, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(633, 60);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Обчислити значення функції";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(95, 268);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(347, 51);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Ведіть значення х";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1407, 611);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(733, 169);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(500, 389);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(181, 381);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(300, 91);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Показати";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->comboBox1->Location = System::Drawing::Point(168, 169);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(313, 53);
			this->comboBox1->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(761, 115);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(165, 51);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Розклад";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(199, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 51);
			this->label5->TabIndex = 1;
			this->label5->Text = L"День тижня";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(67, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1255, 45);
			this->label4->TabIndex = 0;
			this->label4->Text = L"12.Скласти програму, яка виводить розклад занять для заданого дня тижня.";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(1445, 670);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторна робота 2";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, y;
		x = Convert::ToDouble(textBox1->Text);
		if (x < 0) {
			y = sqrt(1 - cos(x));
		}
		else if (x > 0) {
			y = exp(-atan(x));
		}
		textBox2->Text = Convert::ToString(y);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		double x, y;
		x = Convert::ToDouble(textBox1->Text);
		if (x < 0) {
			y = sqrt(1 - cos(x));
		}
		else if (x > 0) {
			y = exp(-atan(x));
		}
		textBox2->Text = Convert::ToString(y);
	}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Очистимо вміст RichTextBox перед виведенням нового розкладу
	richTextBox1->Clear();

	// Отримаємо вибраний день з ComboBox
	String^ selectedDay = comboBox1->SelectedItem->ToString();

	// Додамо розклад в залежності від вибраного дня
	if (selectedDay == "Monday") {
		richTextBox1->AppendText("Monday:\n"
                            "1. Mathematics\n"
                            "2. Ukrainian Language and Literature \n"
                            "3. English \n"
                            "4. Physics \n"
                            "5. Physical Education\n\n");
	}
	else if (selectedDay == "Tuesday") {
		richTextBox1->AppendText("Tuesday:\n"
                            "1. Chemistry \n"
                            "2. History of Ukraine\n"
                            "3. Biology \n"
                            "4. Computer Science \n"
			                "5. Geography \n\n");
	}
	else if (selectedDay == "Wednesday") {
		richTextBox1->AppendText("Wednesday:\n"
			                "1. English \n"
			                "2. Mathematics \n"
			                "3. Ukrainian Language and Literature \n"
			                "4. Music \n"
			                "5. Drawing \n\n");
	}
	else if (selectedDay == "Thursday") {
		richTextBox1->AppendText("Thursday :\n"
                            "1. Physics \n"
                            "2. Chemistry \n"
                            "3. Foreign Literature \n"
                            "4. Physical Education \n"
                            "5. Health Education \n\n");
	}
	else if (selectedDay == "Friday") {
		richTextBox1->AppendText("Friday:\n"
			"1. Biology \n"
			"2. Geography \n"
			"3. History of Ukraine \n"
			"4. Work and Technology \n"
			"5. Environmental Studies ");
	}
	else {
		richTextBox1->AppendText("No schedule available for selected day.\r\n");
	}
}
};
}
