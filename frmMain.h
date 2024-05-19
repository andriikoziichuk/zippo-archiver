#pragma once

#include <regex>
#include "frmAbout.h"
#include "Archiver.h"
#include "StringUtils.h"

namespace OSmetod {

	using namespace Ionic::Zip;
	using namespace System::IO;

	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
		{
			InitializeComponent();
			frmabout = gcnew frmAbout();
			archiver = gcnew Archiver();
		}

	protected:
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ToolStripProgressBar^ tspMain;

	private: System::Windows::Forms::Splitter^ splitter1;

	private: System::DirectoryServices::DirectoryEntry^ directoryEntry2;

	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FileName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FileType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastUpdated;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FileSize;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::ComponentModel::IContainer^ components;

	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::MenuStrip^ menuStrip1;
			System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
			System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
			System::Windows::Forms::ToolStripMenuItem^ saveAssToolStripMenuItem;
			System::Windows::Forms::ToolStripMenuItem^ extractToolStripMenuItem;
			System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
			System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
			System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
			System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem1;
			System::Windows::Forms::ToolStrip^ toolStrip1;
			System::Windows::Forms::ToolStripButton^ toolStripButton1;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			System::Windows::Forms::ToolStripButton^ toolStripButton2;
			System::Windows::Forms::ToolStripButton^ toolStripButton3;
			System::Windows::Forms::Label^ Zippo;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::PictureBox^ pictureBox1;
			System::Windows::Forms::Label^ label3;
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->directoryEntry2 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->FileName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FileType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastUpdated = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FileSize = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			saveAssToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			extractToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			Zippo = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			label3 = (gcnew System::Windows::Forms::Label());
			menuStrip1->SuspendLayout();
			toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { fileToolStripMenuItem, aboutToolStripMenuItem });
			menuStrip1->Location = System::Drawing::Point(0, 0);
			menuStrip1->Name = L"menuStrip1";
			menuStrip1->Size = System::Drawing::Size(1062, 28);
			menuStrip1->TabIndex = 0;
			menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				openToolStripMenuItem,
					saveAssToolStripMenuItem, extractToolStripMenuItem, toolStripSeparator3, closeToolStripMenuItem
			});
			fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			openToolStripMenuItem->Name = L"openToolStripMenuItem";
			openToolStripMenuItem->Size = System::Drawing::Size(141, 26);
			openToolStripMenuItem->Text = L"Open";
			openToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::openToolStripMenuItem_Click);
			// 
			// saveAssToolStripMenuItem
			// 
			saveAssToolStripMenuItem->Name = L"saveAssToolStripMenuItem";
			saveAssToolStripMenuItem->Size = System::Drawing::Size(141, 26);
			saveAssToolStripMenuItem->Text = L"Archive";
			saveAssToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::saveAssToolStripMenuItem_Click);
			// 
			// extractToolStripMenuItem
			// 
			extractToolStripMenuItem->Name = L"extractToolStripMenuItem";
			extractToolStripMenuItem->Size = System::Drawing::Size(141, 26);
			extractToolStripMenuItem->Text = L"Extract";
			extractToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::extractToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			toolStripSeparator3->Name = L"toolStripSeparator3";
			toolStripSeparator3->Size = System::Drawing::Size(138, 6);
			// 
			// closeToolStripMenuItem
			// 
			closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			closeToolStripMenuItem->Size = System::Drawing::Size(141, 26);
			closeToolStripMenuItem->Text = L"Close";
			closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::closeToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { aboutToolStripMenuItem1 });
			aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			aboutToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			aboutToolStripMenuItem->Text = L"About";
			// 
			// aboutToolStripMenuItem1
			// 
			aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			aboutToolStripMenuItem1->Size = System::Drawing::Size(133, 26);
			aboutToolStripMenuItem1->Text = L"About";
			aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmMain::aboutToolStripMenuItem1_Click);
			// 
			// toolStrip1
			// 
			toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				toolStripButton1, toolStripButton2,
					toolStripButton3
			});
			toolStrip1->Location = System::Drawing::Point(0, 28);
			toolStrip1->Name = L"toolStrip1";
			toolStrip1->Size = System::Drawing::Size(1062, 27);
			toolStrip1->TabIndex = 2;
			toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			toolStripButton1->Name = L"toolStripButton1";
			toolStripButton1->Size = System::Drawing::Size(29, 24);
			toolStripButton1->Text = L"toolStripButton1";
			toolStripButton1->ToolTipText = L"Open";
			toolStripButton1->Click += gcnew System::EventHandler(this, &frmMain::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			toolStripButton2->Name = L"toolStripButton2";
			toolStripButton2->Size = System::Drawing::Size(29, 24);
			toolStripButton2->Text = L"toolStripButton2";
			toolStripButton2->ToolTipText = L"Archive";
			toolStripButton2->Click += gcnew System::EventHandler(this, &frmMain::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			toolStripButton3->Name = L"toolStripButton3";
			toolStripButton3->Size = System::Drawing::Size(29, 24);
			toolStripButton3->Text = L"toolStripButton3";
			toolStripButton3->ToolTipText = L"Extract";
			toolStripButton3->Click += gcnew System::EventHandler(this, &frmMain::toolStripButton3_Click);
			// 
			// Zippo
			// 
			Zippo->AutoSize = true;
			Zippo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			Zippo->Location = System::Drawing::Point(886, 407);
			Zippo->Name = L"Zippo";
			Zippo->Size = System::Drawing::Size(120, 46);
			Zippo->TabIndex = 5;
			Zippo->Text = L"Zippo";
			// 
			// label1
			// 
			label1->AllowDrop = true;
			label1->AutoSize = true;
			label1->Location = System::Drawing::Point(871, 453);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(145, 32);
			label1->TabIndex = 7;
			label1->Text = L"an iterative archiver\r\nwritten for a coursework";
			// 
			// pictureBox1
			// 
			pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			pictureBox1->Location = System::Drawing::Point(857, 58);
			pictureBox1->Name = L"pictureBox1";
			pictureBox1->Size = System::Drawing::Size(186, 186);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox1->TabIndex = 10;
			pictureBox1->TabStop = false;
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			label3->Location = System::Drawing::Point(854, 257);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(177, 16);
			label3->TabIndex = 11;
			label3->Text = L"DONATE TO THE ARMY";
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 55);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 624);
			this->splitter1->TabIndex = 4;
			this->splitter1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->FileName,
					this->FileType, this->LastUpdated, this->FileSize
			});
			this->dataGridView1->Location = System::Drawing::Point(9, 58);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(827, 609);
			this->dataGridView1->TabIndex = 8;
			// 
			// FileName
			// 
			this->FileName->HeaderText = L"Name";
			this->FileName->MinimumWidth = 6;
			this->FileName->Name = L"FileName";
			this->FileName->ReadOnly = true;
			this->FileName->Width = 215;
			// 
			// FileType
			// 
			this->FileType->HeaderText = L"Type";
			this->FileType->MinimumWidth = 6;
			this->FileType->Name = L"FileType";
			this->FileType->ReadOnly = true;
			this->FileType->Width = 215;
			// 
			// LastUpdated
			// 
			this->LastUpdated->HeaderText = L"LastUpdated";
			this->LastUpdated->MinimumWidth = 6;
			this->LastUpdated->Name = L"LastUpdated";
			this->LastUpdated->ReadOnly = true;
			this->LastUpdated->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->LastUpdated->Width = 200;
			// 
			// FileSize
			// 
			this->FileSize->HeaderText = L"Size";
			this->FileSize->MinimumWidth = 6;
			this->FileSize->Name = L"FileSize";
			this->FileSize->ReadOnly = true;
			this->FileSize->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->FileSize->Width = 125;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label2->Location = System::Drawing::Point(169, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Path";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			this->openFileDialog2->Filter = L"ZIP files (*.zip)|*.zip|All files (*.*)|*.*";
			this->openFileDialog2->Title = L"Select a ZIP file";
			// 
			// frmMain
			// 
			this->ClientSize = System::Drawing::Size(1062, 679);
			this->Controls->Add(label3);
			this->Controls->Add(pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(label1);
			this->Controls->Add(Zippo);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(toolStrip1);
			this->Controls->Add(menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = menuStrip1;
			this->Name = L"frmMain";
			this->Text = L"Zippo - archiver";
			menuStrip1->ResumeLayout(false);
			menuStrip1->PerformLayout();
			toolStrip1->ResumeLayout(false);
			toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: frmAbout^ frmabout;
	private: Archiver^ archiver;

	private: System::Void tmsiAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		frmabout->ShowDialog();
	}
	private: void doprogress(float value) {
		if (tspMain->Value != (int)value) tspMain->Value = int(value);
		Application::DoEvents();
	}
	private: System::Void tsbexit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void tsbInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Information");
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->toolStripButton1_Click(sender, e);
	}
	private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ selectedPath = folderBrowserDialog1->SelectedPath;
			DirectoryInfo^ dir = gcnew DirectoryInfo(selectedPath);
			label2->Text = selectedPath;
			this->reloadMainGrid(dir);
		}
	}
	private: System::Void reloadMainGrid(DirectoryInfo^ dir) {
		dataGridView1->Rows->Clear();

		for each (FileSystemInfo ^ item in dir->GetFileSystemInfos())
		{
			DataGridViewRow^ newRow = gcnew DataGridViewRow();
			newRow->CreateCells(dataGridView1);

			FileInfo^ fileInfo = gcnew FileInfo(item->FullName);
			newRow->Cells[0]->Value = item->Name; // fileName
			newRow->Cells[1]->Value = (fileInfo->Attributes.HasFlag(System::IO::FileAttributes::Directory) ? "" : item->Extension); // fileType
			newRow->Cells[2]->Value = item->LastWriteTime.ToString(); // lastUpdated
			newRow->Cells[3]->Value = (fileInfo->Attributes.HasFlag(System::IO::FileAttributes::Directory) ? "" : fileInfo->Length.ToString() + " bytes"); // size

			dataGridView1->Rows->Add(newRow);
		}
	}

	private: System::Void aboutToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmabout->ShowDialog();
	}

	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows != nullptr) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			String^ selectedPath = Path::Combine(folderBrowserDialog1->SelectedPath, selectedRow->Cells[0]->Value->ToString());
		
			if (String::IsNullOrEmpty(selectedPath) || String::IsNullOrWhiteSpace(selectedPath)) {
				label2->Text = "Select a folder to archive";
				return;
			}
			DirectoryInfo^ dir = gcnew DirectoryInfo(selectedPath);
			std::string path = StringUtils::ConvertSystemStringToStdString(dir->GetFileSystemInfos()[0]->FullName);

			archiver->archive("", path, true);
			this->reloadMainGrid(dir);
		}
		else {
			System::Console::WriteLine("Nothing to archive!");
		}
	}

	private: System::Void saveAssToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ folderPath = folderBrowserDialog1->SelectedPath;
			DirectoryInfo^ dir = gcnew DirectoryInfo(folderPath);
			archiver->archive(folderPath, "", false);

			this->reloadMainGrid(dir);
		}
	}

	private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows != nullptr) {
			DataGridViewRow^ selectedRows = dataGridView1->SelectedRows[0];

			String^ selectedPath = Path::Combine(folderBrowserDialog1->SelectedPath, selectedRows->Cells[0]->Value->ToString());
			DirectoryInfo^ dir = gcnew DirectoryInfo(folderBrowserDialog1->SelectedPath);
			if (selectedRows->Cells[0]->Value == nullptr) {
				return;
			}
			if (String::IsNullOrEmpty(selectedPath) || String::IsNullOrWhiteSpace(selectedPath)) {
				label2->Text = "Select an archive to extract";
				return;
			}
			if (Path::GetExtension(selectedRows->Cells[1]->Value->ToString()) != ".zip") {
				Console::WriteLine("is not a zip file");
				return;
			}
			archiver->extractFiles(selectedPath);
			this->reloadMainGrid(dir);
		}
		else {
			System::Console::WriteLine("Nothing to extract!");
		}
	}

	private: System::Void extractToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ selectedPath = openFileDialog2->FileName;
			DirectoryInfo^ dir = gcnew DirectoryInfo(folderBrowserDialog1->SelectedPath);
			archiver->extractFiles(selectedPath);
			this->reloadMainGrid(dir);
		}
	}
};
}
