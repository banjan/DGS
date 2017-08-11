//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

MSSQ()
{
	lr_start_transaction("S01_MSSQ_GuestOrder_HomePage_T00");
	truclient_step("1", "Navigate to 'http://qa.gamestop.com/'", "snapshot=MSSQ_1.inf");
	lr_end_transaction("S01_MSSQ_GuestOrder_HomePage_T00",0);
	truclient_step("2", "For ( var i = 1 ; i < 3 ; i++ )", "snapshot=MSSQ_2.inf");
	{
		truclient_step("2.1", "Click on Find games, consoles,... textbox", "snapshot=MSSQ_2.1.inf");
		truclient_step("2.2", "Type TC.getParam('SKU') in Find games, consoles,... textbox", "snapshot=MSSQ_2.2.inf");
		lr_start_transaction("S01_MSSQ_GuestOrder_SearchProduct_T05");
		truclient_step("2.4", "Press Enter key on Find games, consoles,... textbox", "snapshot=MSSQ_2.4.inf");
		lr_end_transaction("S01_MSSQ_GuestOrder_SearchProduct_T05",0);
		lr_start_transaction("S01_MSSQ_GuestOrder_AddToCart_T10");
		truclient_step("2.5", "Click on Add to Cart javascript_link", "snapshot=MSSQ_2.5.inf");
		lr_end_transaction("S01_MSSQ_GuestOrder_AddToCart_T10",0);
	}
	truclient_step("3", "Click on Checkout link", "snapshot=MSSQ_3.inf");
	truclient_step("4", "Click on CONTINUE CHECKOUT ? link", "snapshot=MSSQ_4.inf");
	truclient_step("5", "Wait 3 seconds", "snapshot=MSSQ_5.inf");
	lr_start_transaction("S01_MSSQ_GuestOrder_ContinueAsGuest_T15");
	truclient_step("6", "Click on CONTINUE AS GUEST link", "snapshot=MSSQ_6.inf");
	lr_end_transaction("S01_MSSQ_GuestOrder_ContinueAsGuest_T15",0);
	truclient_step("7", "Click on First Name textbox", "snapshot=MSSQ_7.inf");
	truclient_step("8", "Type accept in First Name textbox", "snapshot=MSSQ_8.inf");
	truclient_step("9", "Type accept in Last Name textbox", "snapshot=MSSQ_9.inf");
	truclient_step("10", "Type 625 westport pkwy in Address 1 textbox", "snapshot=MSSQ_10.inf");
	truclient_step("11", "Type grapevine in City textbox", "snapshot=MSSQ_11.inf");
	truclient_step("12", "Select Texas from State/Province listbox", "snapshot=MSSQ_12.inf");
	truclient_step("13", "Click on Zip/Postal textbox", "snapshot=MSSQ_13.inf");
	truclient_step("14", "Type 76051 in Zip/Postal textbox", "snapshot=MSSQ_14.inf");
	truclient_step("15", "Click on Phone Number textbox", "snapshot=MSSQ_15.inf");
	truclient_step("16", "Type 8177227584 in Phone Number textbox", "snapshot=MSSQ_16.inf");
	truclient_step("17", "Click on Purchaser's Email textbox", "snapshot=MSSQ_17.inf");
	truclient_step("18", "Type gamestop.soasta.0001@gmail.com in Purchaser's Email textbox", "snapshot=MSSQ_18.inf");
	lr_start_transaction("S01_MSSQ_GuestOrder_FillShippingAdd_T20");
	truclient_step("19", "Click on CONTINUE CHECKOUT ?", "snapshot=MSSQ_19.inf");
	lr_end_transaction("S01_MSSQ_GuestOrder_FillShippingAdd_T20",0);
	truclient_step("20", "Wait 3 seconds", "snapshot=MSSQ_20.inf");
	truclient_step("21", "Scroll We are committed to protecting... into view", "snapshot=MSSQ_21.inf");
	lr_start_transaction("S01_MSSQ_GuestOrder_ContinueCheckout_T25");
	truclient_step("22", "Click on CONTINUE CHECKOUT ?", "snapshot=MSSQ_22.inf");
	lr_end_transaction("S01_MSSQ_GuestOrder_ContinueCheckout_T25",0);
	truclient_step("23", "Select Visa from CardType listbox", "snapshot=MSSQ_23.inf");
	truclient_step("24", "Click on Use another payment type... textbox", "snapshot=MSSQ_24.inf");
	truclient_step("25", "Type 4444333322221111 in Use another payment type... textbox", "snapshot=MSSQ_25.inf");
	truclient_step("26", "Select 08 from Expires listbox", "snapshot=MSSQ_26.inf");
	truclient_step("27", "Select 2020 from 010203040506070809101112 listbox", "snapshot=MSSQ_27.inf");
	truclient_step("28", "Click on Security Code: What's... textbox", "snapshot=MSSQ_28.inf");
	truclient_step("29", "Type 123 in Security Code: What's... textbox", "snapshot=MSSQ_29.inf");
	lr_start_transaction("S01_MSSQ_GuestOrder_MakePayment_T30");
	truclient_step("30", "Click on SUBMIT ORDER", "snapshot=MSSQ_30.inf");
	lr_end_transaction("S01_MSSQ_GuestOrder_MakePayment_T30",0);
	truclient_step("31", "Click on No, Thanks", "snapshot=MSSQ_31.inf");
	truclient_step("32", "Click on Your Order Number:", "snapshot=MSSQ_32.inf");

	return 0;
}
