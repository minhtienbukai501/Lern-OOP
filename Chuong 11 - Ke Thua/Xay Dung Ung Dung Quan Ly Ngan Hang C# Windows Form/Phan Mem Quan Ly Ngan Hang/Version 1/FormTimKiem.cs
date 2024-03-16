using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Version_1
{
    public partial class FormTimKiem : Form
    {
        public FormTimKiem()
        {
            InitializeComponent();
        }

        private void btnTimKiem_Click(object sender, EventArgs e)
        {
            Form1.cmnd_timkiem = txtCMND.Text;
            this.Close();
        }
    }
}
