#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Terms
	/// </summary>
	public ref class Terms : public System::Windows::Forms::Form
	{
	public:
		Terms(void)
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
		~Terms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(276, 422);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 77);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Terms::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::Color::Blue;
			this->textBox1->Location = System::Drawing::Point(23, -4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(694, 409);
			this->textBox1->TabIndex = 10;
			// 
			// Terms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->ClientSize = System::Drawing::Size(741, 530);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Terms";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Terms";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Terms::Terms_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Terms::Terms_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Terms::Terms_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Terms::Terms_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Terms::Terms_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Terms_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "Regulamin korzystania z aplikacji\n" +
			"§1. Najwa¿niejsza zasada\n" +
			"U¿ytkownicy zobowi¹zani s¹ do wyra¿ania swojego uwielbienia dla Cristiano Ronaldo na wszystkich mo¿liwych platformach komunikacyjnych oraz w ka¿dym miejscu publicznym.\n\n" +
			"§2. Postanowienia koñcowe\n" +
			"Niniejszy regulamin wchodzi w ¿ycie z chwil¹ jego publikacji i obowi¹zuje wszystkich u¿ytkowników korzystaj¹cych z aplikacji.\n" +
			"Wszelkie zmiany w regulaminie bêd¹ og³aszane na stronie g³ównej aplikacji, a u¿ytkownicy zobowi¹zani s¹ do zapoznania siê z nimi i akceptacji przed dalszym korzystaniem z aplikacji.\n" +
			"W przypadku naruszenia niniejszego regulaminu, administratorzy aplikacji zastrzegaj¹ sobie prawo do zablokowania konta u¿ytkownika lub podjêcia innych odpowiednich dzia³añ.";
	}
	private: System::Void Terms_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		
	}
		   bool draging;
		   Point first_pos;
private: System::Void Terms_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	draging = true;
	first_pos.X = e->X;
	first_pos.Y = e->Y;
}
private: System::Void Terms_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (draging)
	{
		Point new_pos = PointToScreen(Point(e->X, e->Y));
		Location = Point(new_pos.X - first_pos.X, new_pos.Y - first_pos.Y);
	}
}
private: System::Void Terms_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	draging = false;
}
};
}
