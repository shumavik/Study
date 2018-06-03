using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        int timeLeft,timeLeft2;
        int money;
        int menu;
        public void Paint7()
        {
            button7.BackColor = System.Drawing.Color.Blue;
            button7.ForeColor = System.Drawing.Color.LightYellow;
            button6.BackColor = System.Drawing.Color.Blue;
            button6.ForeColor = System.Drawing.Color.LawnGreen;
            button5.BackColor = System.Drawing.Color.Blue;
            button5.ForeColor = System.Drawing.Color.LawnGreen;
            button4.BackColor = System.Drawing.Color.Blue;
            button4.ForeColor = System.Drawing.Color.LawnGreen;
            button3.BackColor = System.Drawing.Color.Blue;
            button3.ForeColor = System.Drawing.Color.LawnGreen;
            button2.BackColor = System.Drawing.Color.Blue;
            button2.ForeColor = System.Drawing.Color.LawnGreen;
        }
        public void Paint6()
        {
            button6.BackColor = System.Drawing.Color.Blue;
            button6.ForeColor = System.Drawing.Color.LawnGreen;
            button5.BackColor = System.Drawing.Color.Blue;
            button5.ForeColor = System.Drawing.Color.LawnGreen;
            button4.BackColor = System.Drawing.Color.Blue;
            button4.ForeColor = System.Drawing.Color.LawnGreen;
            button3.BackColor = System.Drawing.Color.Blue;
            button3.ForeColor = System.Drawing.Color.LawnGreen;
            button2.BackColor = System.Drawing.Color.Blue;
            button2.ForeColor = System.Drawing.Color.LawnGreen;
        }

        public void Paint5()
        {
            button5.BackColor = System.Drawing.Color.Blue;
            button5.ForeColor = System.Drawing.Color.LawnGreen;
            button4.BackColor = System.Drawing.Color.Blue;
            button4.ForeColor = System.Drawing.Color.LawnGreen;
            button3.BackColor = System.Drawing.Color.Blue;
            button3.ForeColor = System.Drawing.Color.LawnGreen;
            button2.BackColor = System.Drawing.Color.Blue;
            button2.ForeColor = System.Drawing.Color.LawnGreen;
        }
        public void Paint4()
        {
            button4.BackColor = System.Drawing.Color.Blue;
            button4.ForeColor = System.Drawing.Color.LawnGreen;
            button3.BackColor = System.Drawing.Color.Blue;
            button3.ForeColor = System.Drawing.Color.LawnGreen;
            button2.BackColor = System.Drawing.Color.Blue;
            button2.ForeColor = System.Drawing.Color.LawnGreen;
        }
        public void Paint3()
        {
            button3.BackColor = System.Drawing.Color.Blue;
            button3.ForeColor = System.Drawing.Color.LawnGreen;
            button2.BackColor = System.Drawing.Color.Blue;
            button2.ForeColor = System.Drawing.Color.LawnGreen;
        }
        public void Paint2()
        {
            button2.BackColor = System.Drawing.Color.Blue;
            button2.ForeColor = System.Drawing.Color.LawnGreen;
        }
        public void PaintZapret7()
        {
            button2.BackColor = System.Drawing.Color.Red;
            button2.ForeColor = System.Drawing.Color.LightYellow;

            button3.BackColor = System.Drawing.Color.Red;
            button3.ForeColor = System.Drawing.Color.LightYellow;

            button4.BackColor = System.Drawing.Color.Red;
            button4.ForeColor = System.Drawing.Color.LightYellow;

            button5.BackColor = System.Drawing.Color.Red;
            button5.ForeColor = System.Drawing.Color.LightYellow;

            button6.BackColor = System.Drawing.Color.Red;
            button6.ForeColor = System.Drawing.Color.LightYellow;

            button7.BackColor = System.Drawing.Color.Red;
            button7.ForeColor = System.Drawing.Color.LightYellow;
        }
        public void PaintZapret6()
        {
            button3.BackColor = System.Drawing.Color.Red;
            button3.ForeColor = System.Drawing.Color.LightYellow;

            button4.BackColor = System.Drawing.Color.Red;
            button4.ForeColor = System.Drawing.Color.LightYellow;


            button5.BackColor = System.Drawing.Color.Red;
            button5.ForeColor = System.Drawing.Color.LightYellow;

            button6.BackColor = System.Drawing.Color.Red;
            button6.ForeColor = System.Drawing.Color.LightYellow;

            button7.BackColor = System.Drawing.Color.Red;
            button7.ForeColor = System.Drawing.Color.LightYellow;
        }
        public void PaintZapret5()
        {
            button4.BackColor = System.Drawing.Color.Red;
            button4.ForeColor = System.Drawing.Color.LightYellow;


            button5.BackColor = System.Drawing.Color.Red;
            button5.ForeColor = System.Drawing.Color.LightYellow;

            button6.BackColor = System.Drawing.Color.Red;
            button6.ForeColor = System.Drawing.Color.LightYellow;

            button7.BackColor = System.Drawing.Color.Red;
            button7.ForeColor = System.Drawing.Color.LightYellow;
        }
        public void PaintZapret4()
        {
            button5.BackColor = System.Drawing.Color.Red;
            button5.ForeColor = System.Drawing.Color.LightYellow;

            button6.BackColor = System.Drawing.Color.Red;
            button6.ForeColor = System.Drawing.Color.LightYellow;

            button7.BackColor = System.Drawing.Color.Red;
            button7.ForeColor = System.Drawing.Color.LightYellow;

        }
        public void PaintZapret3()
        {
            button6.BackColor = System.Drawing.Color.Red;
            button6.ForeColor = System.Drawing.Color.LightYellow;

            button7.BackColor = System.Drawing.Color.Red;
            button7.ForeColor = System.Drawing.Color.LightYellow;
        }
        public void PaintZapret2()
        {
            button7.BackColor = System.Drawing.Color.Red;
            button7.ForeColor = System.Drawing.Color.LightYellow;
        }
        public Form1()
        {
            InitializeComponent();
            MessageBox.Show("ИНСТРУКЦИЯ\n Введите деньги номиналом: 1,2,5,10,50,100,500,1000" +
           "\n Затем выбирите доступный напиток");
            button8.Enabled = false;
            PaintZapret7();
        }

     
        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void MoneyLabel_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar != 8 && (e.KeyChar < 48 || e.KeyChar > 57))
                e.Handled = true;
        }

        private void button1_Click(object sender, EventArgs e)
        {

            if (textBox1.Text == "")
            {
                MessageBox.Show("Вставьте деньги в автомат");
                textBox1.Focus();
            }
            else
            {
                int num = Convert.ToInt32(textBox1.Text);
                if (num == 1 || num == 2 || num == 5 || num == 10 || num == 50 || num == 100 || num == 500 || num == 1000)
                {
                    textBox2.Text = Convert.ToString(Convert.ToInt32(textBox2.Text) + Convert.ToInt32(textBox1.Text));
                    textBox1.Clear();
                    money = Convert.ToInt32(textBox2.Text);
                    button8.Enabled = true;
                    timeLeft = 30;
                    timer1.Start();
                    if (money >= 60)
                        Paint7();

                    else if (money >= 50)
                        Paint6();

                    else if (money >= 40)
                        Paint5();

                    else if (money >= 30)
                        Paint4();

                    else if (money >= 20)
                        Paint3();

                    else if (money >= 10)
                        Paint2();
                    textBox1.Focus();

                }
                else
                {
                    MessageBox.Show("Введены деньги неверного номинала");
                    textBox1.Clear();
                    textBox1.Focus();
                }
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (timeLeft > 0)
                timeLeft--;
            else if (money == 0) timer1.Stop();
            else
            {
                timer1.Stop();
                MessageBox.Show("Время ожидания вышло, заберите Ваши деньги");
                textBox2.Clear();
                textBox2.Text = "0";
                money = 0;
                button8.Enabled = false;
                PaintZapret7();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (money < 10)
            {
                MessageBox.Show("Мало денег");
                timer1.Stop();   
            }
            else
            {
                money -= 10;

                if ( money < 10 )
                {
                    PaintZapret7();
                    button8.Enabled = false;
                }
                else if (money < 20)
                    PaintZapret6();
                else if (money < 30)
                    PaintZapret5();
                else if (money < 40)
                    PaintZapret4();
                else if (money < 50)
                    PaintZapret3();
                else if ( money < 60)
                    PaintZapret2();

                textBox2.Text = Convert.ToString(money);
                MessageBox.Show("Куплен первый напиток");
                
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (money < 20)
            {
                MessageBox.Show("Мало денег");
                timer1.Stop();
            }
            else
            {
                money -= 20;

                if (money < 10)
                {
                    PaintZapret7();
                    button8.Enabled = false;
                }
                else if (money < 20)
                    PaintZapret6();
                else if (money < 30)
                    PaintZapret5();
                else if (money < 40)
                    PaintZapret4();
                else if (money < 50)
                    PaintZapret3();
                else if (money < 60)
                    PaintZapret2();

                textBox2.Text = Convert.ToString(money);
                MessageBox.Show("Куплен второй напиток");
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (money < 30)
            {
                MessageBox.Show("Мало денег");
                timer1.Stop();
            }
            else
            {
                money -= 30;

                if (money < 10)
                {
                    PaintZapret7();
                    button8.Enabled = false;
                }
                else if (money < 20)
                    PaintZapret6();
                else if (money < 30)
                    PaintZapret5();
                else if (money < 40)
                    PaintZapret4();
                else if (money < 50)
                    PaintZapret3();
                else if (money < 60)
                    PaintZapret2();

                textBox2.Text = Convert.ToString(money);
                MessageBox.Show("Куплен третий напиток");
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (money < 40)
            {
                MessageBox.Show("Мало денег");
                timer1.Stop();
            }
            else
            {
                money -= 40;

                if (money < 10)
                {
                    PaintZapret7();
                    button8.Enabled = false;
                }
                else if (money < 20)
                    PaintZapret6();
                else if (money < 30)
                    PaintZapret5();
                else if (money < 40)
                    PaintZapret4();
                else if (money < 50)
                    PaintZapret3();
                else if (money < 60)
                    PaintZapret2();

                textBox2.Text = Convert.ToString(money);
                MessageBox.Show("Куплен четвертый напиток");
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (money < 50)
            {
                MessageBox.Show("Мало денег");
                timer1.Stop();
            }
            else
            {
                money -= 50;

                if (money < 10)
                {
                    PaintZapret7();
                    button8.Enabled = false;
                }
                else if (money < 20)
                    PaintZapret6();
                else if (money < 30)
                    PaintZapret5();
                else if (money < 40)
                    PaintZapret4();
                else if (money < 50)
                    PaintZapret3();
                else if (money < 60)
                    PaintZapret2();

                textBox2.Text = Convert.ToString(money);
                MessageBox.Show("Куплен пятый напиток");
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (money < 60)
            {
                MessageBox.Show("Мало денег");
                timer1.Stop();
            }
            else
            {
                money -= 60;

                if (money < 10)
                {
                    PaintZapret7();
                    button8.Enabled = false;
                }
                else if (money < 20)
                    PaintZapret6();
                else if (money < 30)
                    PaintZapret5();
                else if (money < 40)
                    PaintZapret4();
                else if (money < 50)
                    PaintZapret3();
                else if (money < 60)
                    PaintZapret2();

                textBox2.Text = Convert.ToString(money);
                MessageBox.Show("Куплен шестой напиток");
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox2.Text = "0";
            textBox3.Text = Convert.ToString(money);
            button8.Enabled = false;
            timeLeft2 = 10;
            money = 0;
            PaintZapret7();
            timer2.Start();
            textBox1.Enabled = false;

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void timer2_Tick(object sender, EventArgs e)
        {
            if (timeLeft2 > 1)
            {
                if (timeLeft2 % 2 == 0)
                {
                    label3.ForeColor = System.Drawing.Color.Black;
                }
                else
                {
                    label3.ForeColor = System.Drawing.Color.Red;
                }
                timeLeft2--;

            }
            else
            {
                timer2.Stop();
                MessageBox.Show("Заберите Вашу сдачу");
                textBox1.Enabled = true;
                textBox3.Text = "0";

            }
        }
    }
}
