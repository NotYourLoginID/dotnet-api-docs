using namespace System;
using namespace System::Globalization;
int main()
{
   
   // Creates and initializes a CultureInfo.
   CultureInfo^ myCI = gcnew CultureInfo( "en-US",false );
   
   // Clones myCI and modifies the DTFI and NFI instances associated with the clone.
   CultureInfo^ myCIclone = dynamic_cast<CultureInfo^>(myCI->Clone());
   myCIclone->DateTimeFormat->AMDesignator = "a.m.";
   myCIclone->DateTimeFormat->DateSeparator = "-";
   myCIclone->NumberFormat->CurrencySymbol = "USD";
   myCIclone->NumberFormat->NumberDecimalDigits = 4;
   
   // Displays the properties of the DTFI and NFI instances associated with the original and with the clone. 
   Console::WriteLine( "DTFI/NFI PROPERTY\tORIGINAL\tMODIFIED CLONE" );
   Console::WriteLine( "DTFI.AMDesignator\t{0}\t\t{1}", myCI->DateTimeFormat->AMDesignator, myCIclone->DateTimeFormat->AMDesignator );
   Console::WriteLine( "DTFI.DateSeparator\t{0}\t\t{1}", myCI->DateTimeFormat->DateSeparator, myCIclone->DateTimeFormat->DateSeparator );
   Console::WriteLine( "NFI.CurrencySymbol\t{0}\t\t{1}", myCI->NumberFormat->CurrencySymbol, myCIclone->NumberFormat->CurrencySymbol );
   Console::WriteLine( "NFI.NumberDecimalDigits\t{0}\t\t{1}", myCI->NumberFormat->NumberDecimalDigits, myCIclone->NumberFormat->NumberDecimalDigits );
}

/*
This code produces the following output.

DTFI/NFI PROPERTY       ORIGINAL        MODIFIED CLONE
DTFI.AMDesignator       AM              a.m.
DTFI.DateSeparator      /               -
NFI.CurrencySymbol      $               USD
NFI.NumberDecimalDigits 2               4
*/