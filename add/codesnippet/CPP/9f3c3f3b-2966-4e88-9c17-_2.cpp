      // Display a message box. The Help button opens the Mspaint.chm Help file, 
      // and the "mspaint.chm::/paint_brush.htm" Help keyword shows the 
      // associated topic.
      System::Windows::Forms::DialogResult r7 = MessageBox::Show( "Message with Help file and keyword.", "Help Caption", MessageBoxButtons::OK, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1, (MessageBoxOptions)0, "mspaint.chm", "mspaint.chm::/paint_brush.htm" );