#pragma once
#include "Terms.h"
#include <fstream>


namespace $safeprojectname$ {

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
	private:
		String^ username;
	private: System::Windows::Forms::Button^ button4;
		   String^ password;

	public:
		MyForm(void)
		{
			InitializeComponent();
			username = "";
			password = "";
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	 
		  
	protected:


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(37, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(45, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(45, 251);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"password";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(48, 193);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 35);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(48, 287);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(202, 35);
			this->textBox2->TabIndex = 4;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Black;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.2F));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(48, 370);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(114, 23);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"I agree to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Blue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(42, 412);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 49);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->ForeColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(174, 412);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 49);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Blue;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(306, 412);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 49);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.2F));
			this->button4->ForeColor = System::Drawing::Color::Blue;
			this->button4->Location = System::Drawing::Point(168, 365);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(155, 28);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Terms and Rules";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(862, 600);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.2F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginUI";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


		String^ sciezka_do_obrazu = "C:\\Users\\USER\\Desktop\\Login\\img\\back1n.jpg";

		// Spróbuj wczytaæ obraz
		try {
			// Ustawienie obrazu jako t³a formularza
			this->BackgroundImage = Image::FromFile(sciezka_do_obrazu);
		}
		catch (Exception^ ex) {
			// Obs³uga b³êdów wczytywania obrazu
			MessageBox::Show("Nie uda³o siê wczytaæ obrazu: " + ex->Message);
		}
		username = "";
		password = "";
		textBox1->Text = "";
		textBox2->Text = "";
		if (!checkBox1->Checked)
		{
			button1->Enabled = false;
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		

		 
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	   
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	bool approved = false;
	if (textBox1->Text != "" && textBox2->Text != "" && checkBox1->Checked)
	{
		button1->Enabled = true;
		username = textBox1->Text;
		password = textBox2->Text;
		checkBox1->Checked = false;
		approved = true;
	}
	if (approved)
	{
		try
		{
			// Tworzenie obiektu StreamWriter do zapisu do pliku "userdata.txt"
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("C:\\Users\\USER\\Desktop\\Login\\database\\database1.txt",true);

			// Zapisanie danych do pliku
			sw->WriteLine("Username: " + username);
			sw->WriteLine("Password: " + password);

			// Zamkniêcie obiektu StreamWriter
			sw->Close();

			MessageBox::Show("Uda³o siê zalogowaæ! Twoje dane zosta³y zapisane", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Wyst¹pi³ b³¹d podczas zapisywania danych: " + ex->Message, "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
}
	   //exit app
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   //clear username , password
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	username = "";
	password = "";
	textBox1->Text = "";
	textBox2->Text = "";
}
	   //add form2 tj.terms and cond
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Terms ^ TermsForm = gcnew Terms;
	TermsForm->Show();
}
	   //move forms
	   bool dragging;
	   Point offset;
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dragging)
	{
		Point CurrentMousePos = PointToScreen(Point(e->X, e->Y));
		Location = Point(CurrentMousePos.X - offset.X, CurrentMousePos.Y-offset.Y);
	}
}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
	
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked && textBox1->Text != "" && textBox2->Text != "") button1->Enabled = true;
	else
	{
		button1->Enabled = false;
	}
}
};
}
