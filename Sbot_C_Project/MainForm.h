#pragma once

namespace SbotCProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		System::Windows::Forms::Label^ lblUsername;
		System::Windows::Forms::Label^ lblPassword;
		System::Windows::Forms::TextBox^ txtUsername;
		System::Windows::Forms::TextBox^ txtPassword;
		System::Windows::Forms::Button^ btnSignIn;
		System::Windows::Forms::LinkLabel^ lnkForgotPassword;
		System::Windows::Forms::Panel^ pnlLogin;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pnlLogin = (gcnew System::Windows::Forms::Panel());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->lnkForgotPassword = (gcnew System::Windows::Forms::LinkLabel());
			this->pnlLogin->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlLogin
			// 
			this->pnlLogin->Controls->Add(this->lnkForgotPassword);
			this->pnlLogin->Controls->Add(this->btnSignIn);
			this->pnlLogin->Controls->Add(this->txtPassword);
			this->pnlLogin->Controls->Add(this->txtUsername);
			this->pnlLogin->Controls->Add(this->lblPassword);
			this->pnlLogin->Controls->Add(this->lblUsername);
			this->pnlLogin->Location = System::Drawing::Point(50, 50);
			this->pnlLogin->Name = L"pnlLogin";
			this->pnlLogin->Size = System::Drawing::Size(300, 200);
			this->pnlLogin->TabIndex = 0;
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Location = System::Drawing::Point(20, 30);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(58, 13);
			this->lblUsername->TabIndex = 0;
			this->lblUsername->Text = L"Username:";
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(20, 70);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(56, 13);
			this->lblPassword->TabIndex = 1;
			this->lblPassword->Text = L"Password:";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(100, 27);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(180, 20);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(100, 67);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(180, 20);
			this->txtPassword->TabIndex = 3;
			// 
			// btnSignIn
			// 
			this->btnSignIn->Location = System::Drawing::Point(100, 110);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(100, 30);
			this->btnSignIn->TabIndex = 4;
			this->btnSignIn->Text = L"Sign In";
			this->btnSignIn->UseVisualStyleBackColor = true;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &MainForm::btnSignIn_Click);
			// 
			// lnkForgotPassword
			// 
			this->lnkForgotPassword->AutoSize = true;
			this->lnkForgotPassword->Location = System::Drawing::Point(100, 150);
			this->lnkForgotPassword->Name = L"lnkForgotPassword";
			this->lnkForgotPassword->Size = System::Drawing::Size(92, 13);
			this->lnkForgotPassword->TabIndex = 5;
			this->lnkForgotPassword->TabStop = true;
			this->lnkForgotPassword->Text = L"Forgot Password?";
			this->lnkForgotPassword->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::lnkForgotPassword_LinkClicked);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 300);
			this->Controls->Add(this->pnlLogin);
			this->Name = L"MainForm";
			this->Text = L"Login Screen";
			this->pnlLogin->ResumeLayout(false);
			this->pnlLogin->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion

	private:
		System::Void btnSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
			// TODO: Add authentication logic here
			if (txtUsername->Text == "admin" && txtPassword->Text == "password") {
				MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void lnkForgotPassword_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			MessageBox::Show("Password recovery feature will be implemented soon.", "Forgot Password", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	};
}
