#pragma once
#include "About.h"

namespace ImageViewer {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1; //d
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ BackBtn;


	private: System::Windows::Forms::Button^ FrontBtn;

	private: System::Windows::Forms::Button^ ResetAll;
	private: System::Windows::Forms::Button^ CloseImage;
	private: System::Windows::Forms::Button^ OpenImage;
	private: System::Windows::Forms::Button^ BeginZoom;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ZoomIn;
	private: System::Windows::Forms::Button^ ZoomOut;


	private: System::Windows::Forms::OpenFileDialog^ ofd;
	private: System::Windows::Forms::Button^ Exit;


	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ AboutDialog;
	private: System::Windows::Forms::Button^ BlackWhite;



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
		/// povezani dijelovi koda pod jednim imenom
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->AboutDialog = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox()); //stvaranje nove instance PictureBox klase
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->CloseImage = (gcnew System::Windows::Forms::Button());
			this->OpenImage = (gcnew System::Windows::Forms::Button());
			this->BeginZoom = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ZoomIn = (gcnew System::Windows::Forms::Button());
			this->ZoomOut = (gcnew System::Windows::Forms::Button());
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->FrontBtn = (gcnew System::Windows::Forms::Button());
			this->ResetAll = (gcnew System::Windows::Forms::Button());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->BlackWhite = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->Controls->Add(this->AboutDialog);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1340, 694);
			this->panel1->TabIndex = 0;
			// 
			// AboutDialog
			// 
			this->AboutDialog->BackColor = System::Drawing::SystemColors::Info;
			this->AboutDialog->Location = System::Drawing::Point(29, 34);
			this->AboutDialog->Name = L"AboutDialog";
			this->AboutDialog->Size = System::Drawing::Size(77, 124);
			this->AboutDialog->TabIndex = 1;
			this->AboutDialog->Text = L"About";
			this->AboutDialog->UseVisualStyleBackColor = false;
			this->AboutDialog->Click += gcnew System::EventHandler(this, &MyForm::AboutDialog_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pictureBox1->Location = System::Drawing::Point(179, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(956, 534);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Info;
			this->panel2->Controls->Add(this->BlackWhite);
			this->panel2->Controls->Add(this->Exit);
			this->panel2->Controls->Add(this->CloseImage);
			this->panel2->Controls->Add(this->OpenImage);
			this->panel2->Controls->Add(this->BeginZoom);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->ZoomIn);
			this->panel2->Controls->Add(this->ZoomOut);
			this->panel2->Controls->Add(this->BackBtn);
			this->panel2->Controls->Add(this->FrontBtn);
			this->panel2->Controls->Add(this->ResetAll);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 567);
			this->panel2->MinimumSize = System::Drawing::Size(1037, 127);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1340, 127);
			this->panel2->TabIndex = 1;
			// 
			// Exit
			// 
			this->Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Location = System::Drawing::Point(1165, 23);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(134, 81);
			this->Exit->TabIndex = 9;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// CloseImage
			// 
			this->CloseImage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->CloseImage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseImage->Location = System::Drawing::Point(1038, 23);
			this->CloseImage->Name = L"CloseImage";
			this->CloseImage->Size = System::Drawing::Size(121, 81);
			this->CloseImage->TabIndex = 8;
			this->CloseImage->Text = L"Close";
			this->CloseImage->UseVisualStyleBackColor = true;
			this->CloseImage->Click += gcnew System::EventHandler(this, &MyForm::CloseImage_Click);
			// 
			// OpenImage
			// 
			this->OpenImage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->OpenImage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OpenImage->Location = System::Drawing::Point(925, 23);
			this->OpenImage->Name = L"OpenImage";
			this->OpenImage->Size = System::Drawing::Size(107, 81);
			this->OpenImage->TabIndex = 7;
			this->OpenImage->Text = L"Open";
			this->OpenImage->UseVisualStyleBackColor = true;
			this->OpenImage->Click += gcnew System::EventHandler(this, &MyForm::OpenImage_Click);
			// 
			// BeginZoom
			// 
			this->BeginZoom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->BeginZoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BeginZoom->Location = System::Drawing::Point(616, 23);
			this->BeginZoom->Name = L"BeginZoom";
			this->BeginZoom->Size = System::Drawing::Size(86, 81);
			this->BeginZoom->TabIndex = 6;
			this->BeginZoom->Text = L"=";
			this->BeginZoom->UseVisualStyleBackColor = true;
			this->BeginZoom->Click += gcnew System::EventHandler(this, &MyForm::BeginZoom_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(321, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 37);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Zoom:";
			// 
			// ZoomIn
			// 
			this->ZoomIn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ZoomIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ZoomIn->Location = System::Drawing::Point(524, 23);
			this->ZoomIn->Name = L"ZoomIn";
			this->ZoomIn->Size = System::Drawing::Size(86, 81);
			this->ZoomIn->TabIndex = 4;
			this->ZoomIn->Text = L"+";
			this->ZoomIn->UseVisualStyleBackColor = true;
			this->ZoomIn->Click += gcnew System::EventHandler(this, &MyForm::ZoomIn_Click);
			// 
			// ZoomOut
			// 
			this->ZoomOut->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ZoomOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ZoomOut->Location = System::Drawing::Point(432, 23);
			this->ZoomOut->Name = L"ZoomOut";
			this->ZoomOut->Size = System::Drawing::Size(86, 81);
			this->ZoomOut->TabIndex = 3;
			this->ZoomOut->Text = L"-";
			this->ZoomOut->UseVisualStyleBackColor = true;
			this->ZoomOut->Click += gcnew System::EventHandler(this, &MyForm::ZoomOut_Click);
			// 
			// BackBtn
			// 
			this->BackBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->BackBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackBtn->Location = System::Drawing::Point(179, 23);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(68, 81);
			this->BackBtn->TabIndex = 2;
			this->BackBtn->Text = L"<";
			this->BackBtn->UseVisualStyleBackColor = true;
			this->BackBtn->Click += gcnew System::EventHandler(this, &MyForm::BackBtn_Click);
			// 
			// FrontBtn
			// 
			this->FrontBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->FrontBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FrontBtn->Location = System::Drawing::Point(253, 23);
			this->FrontBtn->Name = L"FrontBtn";
			this->FrontBtn->Size = System::Drawing::Size(63, 81);
			this->FrontBtn->TabIndex = 1;
			this->FrontBtn->Text = L">";
			this->FrontBtn->UseVisualStyleBackColor = true;
			this->FrontBtn->Click += gcnew System::EventHandler(this, &MyForm::FrontBtn_Click);
			// 
			// ResetAll
			// 
			this->ResetAll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ResetAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResetAll->Location = System::Drawing::Point(12, 23);
			this->ResetAll->Name = L"ResetAll";
			this->ResetAll->Size = System::Drawing::Size(161, 81);
			this->ResetAll->TabIndex = 0;
			this->ResetAll->Text = L"Reset All";
			this->ResetAll->UseVisualStyleBackColor = true;
			this->ResetAll->Click += gcnew System::EventHandler(this, &MyForm::ResetAll_Click);  //connecting button with function (implicitno deklarirana unutar klase)
			// 
			// ofd
			// 
			this->ofd->Filter = L"\"JPEG|*.jpg|All Files|*.*\"";
			// 
			// BlackWhite
			// 
			this->BlackWhite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BlackWhite->Location = System::Drawing::Point(751, 23);
			this->BlackWhite->Name = L"BlackWhite";
			this->BlackWhite->Size = System::Drawing::Size(127, 80);
			this->BlackWhite->TabIndex = 10;
			this->BlackWhite->Text = L"B/W";
			this->BlackWhite->UseVisualStyleBackColor = true;
			this->BlackWhite->Click += gcnew System::EventHandler(this, &MyForm::BlackWhite_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1340, 694);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion 

		array<String^>^ files;
		String^ path;
		int currentIndex;
		const int zoomLevel = 100;
		int Zooms = 0; //clanska varijabla

	private: System::Void ResetAll_Click(System::Object^ sender, System::EventArgs^ e) {

		Application::Restart();

	}
private: System::Void CloseImage_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MessageBox::Show("Are you sure you want to close this image?", "Close prompt", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		pictureBox1->ImageLocation = "";
	}
}
private: System::Void OpenImage_Click(System::Object^ sender, System::EventArgs^ e) {

	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {  //ako korisnik odabere datoteku i pritisne OK nastavljamo

		pictureBox1->ImageLocation = ofd->FileName; //prikaz slike
		path = System::IO::Path::GetDirectoryName(ofd->FileName); //dohvaca direktorij gdje se nalazi odabrana slika
		files = System::IO::Directory::GetFiles(path); //dohvaca sve dokumente iz tog direktorija

		for (int i = 0; i < files->Length; i++) {

			if (files[i] == ofd->FileName) { //trazimo indeks one datoteke koja je sad otvorena 
			
				currentIndex = i;
				break;

			}
		}

	}

}
private: System::Void FrontBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (currentIndex != files->Length - 1) { //if we didnt come to the last  image
		currentIndex++;
	}
	pictureBox1->ImageLocation = files[currentIndex];
}
private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (currentIndex != 0) {  //if we didnt come to the first
		currentIndex--;
	}
	pictureBox1->ImageLocation = files[currentIndex];

}
private: System::Void ZoomIn_Click(System::Object^ sender, System::EventArgs^ e) {

	pictureBox1->Top -= zoomLevel / 2;
	pictureBox1->Left -= zoomLevel / 2;
	pictureBox1->Height += zoomLevel;
	pictureBox1->Width += zoomLevel;
	Zooms++;

}
private: System::Void ZoomOut_Click(System::Object^ sender, System::EventArgs^ e) {

	pictureBox1->Top += zoomLevel / 2;
	pictureBox1->Left += zoomLevel / 2;
	pictureBox1->Height -= zoomLevel;
	pictureBox1->Width -= zoomLevel;
	Zooms--;

}
private: System::Void BeginZoom_Click(System::Object^ sender, System::EventArgs^ e) {

	int NewZoom = Zooms;

	if (Zooms > 0) //image is bigger
	{ 
		for (int i = 0; i < NewZoom; i++) {

			ZoomOut->PerformClick(); 

		}

	}

	if (Zooms < 0) //image is smaller
	{
		for (int i = 0; i > NewZoom; i--) {

			ZoomIn->PerformClick();
		}
	}
	Zooms = 0;
}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MessageBox::Show("Do you want to exit?", "Exit prompt", MessageBoxButtons::YesNo,
		MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}

}
private: System::Void AboutDialog_Click(System::Object^ sender, System::EventArgs^ e) {

	About^ aboutForm = gcnew About; //napravili objekt
	aboutForm->ShowDialog(); //prikazat ce novi form(About.h) kojeg smo napravili

}

private:
	bool isGray = false; //pratimo je li slika siva 

private: System::Void BlackWhite_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pictureBox1->Image != nullptr) { 
		Bitmap^ curBitmap = gcnew Bitmap(pictureBox1->Image); //radimo kopiju slike kako bi ju mogli mijenjati bez da promijenimo original 
		Bitmap^ blackwhite;
		if (!isGray) {
			blackwhite = ConvertToBlackWhite(curBitmap); //mijenjamo sliku
			pictureBox1->Image = blackwhite; //prikazuje se nova slika
			isGray = true;
		}
		else {
			blackwhite = Inversion(curBitmap);
			isGray = false;
		}
		pictureBox1->Image = blackwhite;
	}
}

private: Bitmap^ Inversion(Bitmap^ original) {
	Bitmap^ inverted = gcnew Bitmap(original->Width, original->Height);
	for (int y = 0; y < original->Height; y++) {
		for (int x = 0; x < original->Width; x++) {
			Color originalColor = original->GetPixel(x, y);
			int invertedValue = 255 - originalColor.R; 
			Color invertedColor = Color::FromArgb(invertedValue, invertedValue, invertedValue); // Kreira novu boju koriste?i inverzirani intenzitet za sve tri komponente (R, G, B).
			inverted->SetPixel(x, y, invertedColor);
		}
	}
	return inverted;
}

	private: Bitmap^ ConvertToBlackWhite(Bitmap^ original) {
		Bitmap^ blackwhiteBitmap = gcnew Bitmap(original->Width, original->Height); //slika ce bit iste visine i sirine

		for (int y = 0; y < original->Height; y++) {
			for (int x = 0; x < original->Width; x++) {
				Color originalColor = original->GetPixel(x, y); //dohvaca boju piksela na pojedinoj koordinati 
				int grayValue = (int)((originalColor.R * 0.3) + (originalColor.G * 0.59) + (originalColor.B * 0.11));  //izracunava nijansu sive za taj piksel koristeci se crvenom
				// zelenom i plavom // ova ponderiranja (0.3, 0.59, 0.11) temelje se na ljudskoj percepciji boja
				Color grayColor = Color::FromArgb(grayValue, grayValue, grayValue);
				blackwhiteBitmap->SetPixel(x, y, grayColor); //na taj piksel postavlja crnobijelu boju
			}
		}

		return blackwhiteBitmap;
	}
};
}