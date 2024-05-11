#pragma once

#include <regex>
#include <ctime>
#include <string>
#include <fstream>
#include <iostream>
#include <filesystem>
#include "frmAbout.h"

namespace OSmetod {

	using namespace System;
	using namespace Ionic::Zip;
	using namespace System::IO;
	using namespace System::IO::Compression;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			frmabout = gcnew frmAbout();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ mnsMain;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiFile;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiNew;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiLoad;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiSave;
	protected:

	protected:




	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiClose;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiProcess;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiStart;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiStop;
	private: System::Windows::Forms::ToolStripMenuItem^ tmsiParams;











	private: System::Windows::Forms::ToolStrip^ tsMain;
	private: System::Windows::Forms::ToolStripButton^ tsbNew;
	private: System::Windows::Forms::ToolStripButton^ tsbOpen;
	private: System::Windows::Forms::ToolStripButton^ tsbSave;




	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ tsbExecute;
	private: System::Windows::Forms::ToolStripButton^ tsbCancel;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ tsbAbout;

	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::StatusStrip^ stMain;
	private: System::Windows::Forms::ToolStripStatusLabel^ tslInfo;
	private: System::Windows::Forms::ToolStripProgressBar^ tspMain;



	private: System::Windows::Forms::SplitContainer^ scMain;

	private: System::Windows::Forms::Panel^ pnlview;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pbMain;
	private: System::Windows::Forms::Panel^ pnlInfo;
	private: System::Windows::Forms::TextBox^ txbInfo;




	private: System::Windows::Forms::Label^ lblInfo;

	private: System::Windows::Forms::SplitContainer^ scView;
	private: System::Windows::Forms::TreeView^ tvMain;
	private: System::Windows::Forms::ListView^ lvMain;



	private: System::Windows::Forms::ColumnHeader^ col1;
	private: System::Windows::Forms::ColumnHeader^ col2;
	private: System::Windows::Forms::ColumnHeader^ col3;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripButton^ tsbexit;
	private: System::Windows::Forms::ToolStripButton^ tsbInfo;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::DirectoryServices::DirectoryEntry^ directoryEntry1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;


	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAssToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Label^ Zippo;
	private: System::DirectoryServices::DirectoryEntry^ directoryEntry2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




private: System::Windows::Forms::Label^ label2;




private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::ToolStripMenuItem^ extractToolStripMenuItem;
private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ FileName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ FileType;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastUpdated;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ FileSize;
private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;








	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAssToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->extractToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->Zippo = (gcnew System::Windows::Forms::Label());
			this->directoryEntry2 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->FileName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FileType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastUpdated = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FileSize = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1010, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->openToolStripMenuItem,
					this->saveAssToolStripMenuItem, this->extractToolStripMenuItem, this->toolStripSeparator3, this->closeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::fileToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::openToolStripMenuItem_Click);
			// 
			// saveAssToolStripMenuItem
			// 
			this->saveAssToolStripMenuItem->Name = L"saveAssToolStripMenuItem";
			this->saveAssToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->saveAssToolStripMenuItem->Text = L"Archive";
			this->saveAssToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::saveAssToolStripMenuItem_Click);
			// 
			// extractToolStripMenuItem
			// 
			this->extractToolStripMenuItem->Name = L"extractToolStripMenuItem";
			this->extractToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->extractToolStripMenuItem->Text = L"Extract";
			this->extractToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::extractToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(221, 6);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::closeToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem1 });
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(133, 26);
			this->aboutToolStripMenuItem1->Text = L"About";
			this->aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmMain::aboutToolStripMenuItem1_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 653);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1010, 26);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(47, 20);
			this->toolStripStatusLabel1->Text = L"status";
			this->toolStripStatusLabel1->Click += gcnew System::EventHandler(this, &frmMain::toolStripStatusLabel1_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1010, 27);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"Open";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &frmMain::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(29, 24);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"Archive";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &frmMain::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(29, 24);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->ToolTipText = L"Extract";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &frmMain::toolStripButton3_Click);
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 55);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 598);
			this->splitter1->TabIndex = 4;
			this->splitter1->TabStop = false;
			// 
			// Zippo
			// 
			this->Zippo->AutoSize = true;
			this->Zippo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->Zippo->Location = System::Drawing::Point(849, 321);
			this->Zippo->Name = L"Zippo";
			this->Zippo->Size = System::Drawing::Size(120, 46);
			this->Zippo->TabIndex = 5;
			this->Zippo->Text = L"Zippo";
			this->Zippo->Click += gcnew System::EventHandler(this, &frmMain::label1_Click);
			// 
			// label1
			// 
			this->label1->AllowDrop = true;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(842, 380);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 32);
			this->label1->TabIndex = 7;
			this->label1->Text = L"an iterative archiver\r\nwritten for a coursework";
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
			this->dataGridView1->Size = System::Drawing::Size(810, 592);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMain::dataGridView1_CellContentClick);
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
			this->label2->Click += gcnew System::EventHandler(this, &frmMain::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(845, 58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(153, 144);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label3->Location = System::Drawing::Point(842, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"DONATE TO THE ARMY";
			this->label3->Click += gcnew System::EventHandler(this, &frmMain::label3_Click);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			this->openFileDialog2->Filter = L"ZIP files (*.zip)|*.zip|All files (*.*)|*.*";
			this->openFileDialog2->Title = L"Select a ZIP file";
			// 
			// frmMain
			// 
			this->ClientSize = System::Drawing::Size(1010, 679);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Zippo);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmMain";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load_1);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: frmAbout^ frmabout;

	private: System::Void tmsiAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		frmabout->ShowDialog();
	}
	private: void doprogress(float value) {
		if (tspMain->Value != (int)value) tspMain->Value = int(value);
		Application::DoEvents();
	}
	private: System::Void tsbNew_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("New document!");
	}
	private: System::Void tsbexit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void tsbInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Information");
	}
	private: System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tsmiFile_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripStatusLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->toolStripButton1_Click(sender, e);
	}
	private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void fileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void frmMain_Load_1(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void aboutToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmabout->ShowDialog();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

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
		std::string path = ConvertSystemStringToStdString(dir->GetFileSystemInfos()[0]->FullName);

		String^ folderPath = ExtractDirectoryPath(path);
		String^ zipName = ExtractZipName(ConvertSystemStringToStdString(selectedRow->Cells[0]->Value->ToString()));

		if (System::IO::Directory::Exists(folderPath))
		{
			String^ zipFilePath = folderPath->Remove(folderPath->Length - 1) + "_" + zipName + ".zip";

			try
			{
				this->archiveFolder(folderPath, zipFilePath);
				this->reloadMainGrid(dir);
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Error creating archive: " + ex->Message);
			}
		}
		else
		{
			Console::WriteLine("Folder does not exist: " + folderPath);
		}
	}
	else {
		System::Console::WriteLine("Nothing to archive!");
	}
}
private: System::Void saveAssToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ folderPath = folderBrowserDialog1->SelectedPath;
		String^ zipName = System::IO::Path::GetFileNameWithoutExtension(System::IO::Path::GetTempFileName());
		DirectoryInfo^ dir = gcnew DirectoryInfo(folderPath);
		if (System::IO::Directory::Exists(folderPath))
		{
			String^ zipFilePath = folderPath->Remove(folderPath->Length - 1) + "_" + zipName + ".zip";
			Console::WriteLine("zipFilePath: " + zipFilePath);

			try
			{
				this->archiveFolder(folderPath, zipFilePath);
				this->reloadMainGrid(dir);
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Error creating archive: " + ex->Message);
			}
		}
		else
		{
			Console::WriteLine("Folder does not exist: " + folderPath);
		}
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

		try
		{
			this->extractFiles(selectedPath);
			this->reloadMainGrid(dir);
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error creating archive: " + ex->Message);
		}
	}
	else {
		System::Console::WriteLine("Nothing to archive!");
	}
}
private: System::Void extractToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ selectedPath = openFileDialog2->FileName;
		DirectoryInfo^ dir = gcnew DirectoryInfo(folderBrowserDialog1->SelectedPath);
		try
		{
			this->extractFiles(selectedPath);
			this->reloadMainGrid(dir);
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error creating archive: " + ex->Message);
		}
	}
}
private: System::Void archiveFolder(String^ folderPath, String^ zipName) {
	ZipFile^ zip = gcnew ZipFile();
	zip->AddDirectory(folderPath);
	zip->Save(zipName);

	Console::WriteLine("Archive created successfully at: " + zipName);
}
private: System::Void extractFiles(String^ path) {
	std::string convertedPath = ConvertSystemStringToStdString(path);
	ZipFile^ zip = ZipFile::Read(path);
	String^ tempFileName = System::IO::Path::GetFileNameWithoutExtension(System::IO::Path::GetTempFileName());
	zip->ExtractAll(System::IO::Path::Combine(ExtractDirectoryPath(convertedPath), ExtractZipName(convertedPath) + "_" + tempFileName));
}
private: String^ ExtractDirectoryPath(std::string& fullPath)
{
	size_t lastBackslashPos = fullPath.find_last_of(L'\\');
	if (lastBackslashPos == std::wstring::npos)
		return L"";

	return ConvertStdStringToSystemString(fullPath.substr(0, lastBackslashPos + 1));
}
private: String^ ExtractZipName(std::string& path)
{
	String^ fullPath = ConvertStdStringToSystemString(path);
	return System::IO::Path::GetFileNameWithoutExtension(fullPath);
}
private: System::String^ ConvertStdStringToSystemString(const std::string& nativeString)
{
	return gcnew System::String(nativeString.c_str());
}

private: std::string ConvertSystemStringToStdString(System::String^ managedString)
{
	const wchar_t* nativeWChar = (const wchar_t*)(System::Runtime::InteropServices::Marshal::StringToHGlobalUni(managedString)).ToPointer();
	std::wstring nativeWString(nativeWChar);
	System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr((void*)nativeWChar));
	std::string nativeString(nativeWString.begin(), nativeWString.end());

	return nativeString;
}
};
}
