#pragma once
#include<math.h>
#include <string>
#include <msclr\marshal_cppstd.h>
			namespace Laba2 {

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
			private: System::Windows::Forms::Label^ label1;
			private: System::Windows::Forms::Label^ label2;
			private: System::Windows::Forms::Label^ label3;
			private: System::Windows::Forms::TextBox^ textBox1;
			private: System::Windows::Forms::TextBox^ textBox2;
			private: System::Windows::Forms::TextBox^ textBox3;
			private: System::Windows::Forms::TextBox^ textBox4;
			private: System::Windows::Forms::Label^ label4;
			private: System::Windows::Forms::Button^ button1;
			protected:

			private:
				/// <summary>
				/// Обязательная переменная конструктора.
				/// </summary>
				System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
				/// <summary>
				/// Требуемый метод для поддержки конструктора — не изменяйте 
				/// содержимое этого метода с помощью редактора кода.
				/// </summary>
				void InitializeComponent(void)
				{
					this->label1 = (gcnew System::Windows::Forms::Label());
					this->label2 = (gcnew System::Windows::Forms::Label());
					this->label3 = (gcnew System::Windows::Forms::Label());
					this->textBox1 = (gcnew System::Windows::Forms::TextBox());
					this->textBox2 = (gcnew System::Windows::Forms::TextBox());
					this->textBox3 = (gcnew System::Windows::Forms::TextBox());
					this->textBox4 = (gcnew System::Windows::Forms::TextBox());
					this->label4 = (gcnew System::Windows::Forms::Label());
					this->button1 = (gcnew System::Windows::Forms::Button());
					this->SuspendLayout();
					// 
					// label1
					// 
					this->label1->AutoSize = true;
					this->label1->Location = System::Drawing::Point(12, 9);
					this->label1->Name = L"label1";
					this->label1->Size = System::Drawing::Size(137, 16);
					this->label1->TabIndex = 0;
					this->label1->Text = L"Введіть значення Х:";
					// 
					// label2
					// 
					this->label2->AutoSize = true;
					this->label2->Location = System::Drawing::Point(11, 47);
					this->label2->Name = L"label2";
					this->label2->Size = System::Drawing::Size(138, 16);
					this->label2->TabIndex = 1;
					this->label2->Text = L"Введіть значення Y:";
					// 
					// label3
					// 
					this->label3->AutoSize = true;
					this->label3->Location = System::Drawing::Point(12, 88);
					this->label3->Name = L"label3";
					this->label3->Size = System::Drawing::Size(137, 16);
					this->label3->TabIndex = 2;
					this->label3->Text = L"Введіть значення Z:";
					// 
					// textBox1
					// 
					this->textBox1->Location = System::Drawing::Point(182, 13);
					this->textBox1->Name = L"textBox1";
					this->textBox1->Size = System::Drawing::Size(203, 22);
					this->textBox1->TabIndex = 3;
					// 
					// textBox2
					// 
					this->textBox2->Location = System::Drawing::Point(182, 47);
					this->textBox2->Name = L"textBox2";
					this->textBox2->Size = System::Drawing::Size(203, 22);
					this->textBox2->TabIndex = 4;
					// 
					// textBox3
					// 
					this->textBox3->Location = System::Drawing::Point(182, 88);
					this->textBox3->Name = L"textBox3";
					this->textBox3->Size = System::Drawing::Size(203, 22);
					this->textBox3->TabIndex = 5;
					// 
					// textBox4
					// 
					this->textBox4->Location = System::Drawing::Point(15, 163);
					this->textBox4->Multiline = true;
					this->textBox4->Name = L"textBox4";
					this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					this->textBox4->Size = System::Drawing::Size(370, 133);
					this->textBox4->TabIndex = 6;
					// 
					// label4
					// 
					this->label4->AutoSize = true;
					this->label4->Location = System::Drawing::Point(12, 144);
					this->label4->Name = L"label4";
					this->label4->Size = System::Drawing::Size(219, 16);
					this->label4->TabIndex = 7;
					this->label4->Text = L"Рузультат виконання програми:";
					// 
					// button1
					// 
					this->button1->AllowDrop = true;
					this->button1->Location = System::Drawing::Point(299, 312);
					this->button1->Name = L"button1";
					this->button1->Size = System::Drawing::Size(86, 23);
					this->button1->TabIndex = 8;
					this->button1->Text = L"Виконати";
					this->button1->UseVisualStyleBackColor = true;
					this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseClick);
					// 
					// MyForm
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->ClientSize = System::Drawing::Size(403, 347);
					this->Controls->Add(this->button1);
					this->Controls->Add(this->label4);
					this->Controls->Add(this->textBox4);
					this->Controls->Add(this->textBox3);
					this->Controls->Add(this->textBox2);
					this->Controls->Add(this->textBox1);
					this->Controls->Add(this->label3);
					this->Controls->Add(this->label2);
					this->Controls->Add(this->label1);
					this->Name = L"MyForm";
					this->Text = L"MyForm";
					this->ResumeLayout(false);
					this->PerformLayout();

				}
#pragma endregion
			private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

				double x = Convert::ToDouble(textBox1->Text); //зразок лаби
				double y = Convert::ToDouble(textBox2->Text);
				std::string z1;
				z1 =  msclr::interop::marshal_as<std::string>(textBox3->Text);
				//float z = strtof(z1,);
				textBox4->Text += " Лаб. роб. №1. ст.гр. РТ-23б Онищук.В.О.";
				textBox4->Text += "\r\n\n X = " + Convert::ToString(x);
				textBox4->Text += "\r\n\n\n"" Y = " + Convert::ToString(y);
				//textBox4->Text += "\r\n\n\n\n"" Z = " + Convert::ToString(z);
			
				
				const double pinashist = 2.61799;
				double denominator = 0;
				double numerator = 0;
				double sum = 0;
				float result = 0;

				sum = pow(2, pow(x, y))+ pow(3, x * y);
			//	numerator = y * (atan(z) - pinashist);
				denominator = fabs(x) + (1 / (pow(y, 2) + 1));

				result = sum - numerator / denominator;
				
				textBox4->Text += "\r\n\n\n\n\n"" Result = " + Convert::ToString(result);

					/*
					exponent = exp(y-z);


					float result = tangens+exponent*sqrtSinCos;

					textBox4->Text += "\r\n\n\n\n\n"" Result = " + Convert::ToString(result);
				*/
			}
	};
}
