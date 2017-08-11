//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

SSMQ()
{
	lr_start_transaction("S01_SSMQ_GuestOrder_HomePage_T00");
	truclient_step("1", "Navigate to 'qa.gamestop.com'", "snapshot=SSMQ_1.inf");
	lr_end_transaction("S01_SSMQ_GuestOrder_HomePage_T00",0);
	truclient_step("2", "Click on Find games, consoles,... textbox", "snapshot=SSMQ_2.inf");
	truclient_step("3", "Type TC.getParam('SKU') in Find games, consoles,... textbox", "snapshot=SSMQ_3.inf");
	lr_start_transaction("S01_SSMQ_GuestOrder_SearchProduct_T05");
	truclient_step("4", "Press Enter key on Find games, consoles,... textbox", "snapshot=SSMQ_4.inf");
	lr_end_transaction("S01_SSMQ_GuestOrder_SearchProduct_T05",0);
	lr_start_transaction("S01_SSMQ_GuestOrder_AddToCart_T10");
	truclient_step("5", "Click on Add to Cart javascript_link", "snapshot=SSMQ_5.inf");
	lr_end_transaction("S01_SSMQ_GuestOrder_AddToCart_T10",0);
	truclient_step("6", "Click on Checkout link", "snapshot=SSMQ_6.inf");
	truclient_step("7", "Click on 1 textbox", "snapshot=SSMQ_7.inf");
	truclient_step("8", "Type TC.getParam('Qty') in 1 textbox", "snapshot=SSMQ_8.inf");
	truclient_step("9", "Click on Update", "snapshot=SSMQ_9.inf");
	truclient_step("10", "Click on CONTINUE CHECKOUT ? link", "snapshot=SSMQ_10.inf");
	truclient_step("11", "Wait 3 seconds", "snapshot=SSMQ_11.inf");
	lr_start_transaction("S01_SSMQ_GuestOrder_ContinueAsGuest_T15");
	truclient_step("12", "Click on CONTINUE AS GUEST link", "snapshot=SSMQ_12.inf");
	lr_end_transaction("S01_SSMQ_GuestOrder_ContinueAsGuest_T15",0);
	truclient_step("13", "Click on First Name textbox", "snapshot=SSMQ_13.inf");
	truclient_step("14", "Type accept in First Name textbox", "snapshot=SSMQ_14.inf");
	truclient_step("15", "Type accept in Last Name textbox", "snapshot=SSMQ_15.inf");
	truclient_step("16", "Type 625 westport pkwy in Address 1 textbox", "snapshot=SSMQ_16.inf");
	truclient_step("17", "Type grapevine in City textbox", "snapshot=SSMQ_17.inf");
	truclient_step("18", "Select Texas from State/Province listbox", "snapshot=SSMQ_18.inf");
	truclient_step("19", "Click on Zip/Postal textbox", "snapshot=SSMQ_19.inf");
	truclient_step("20", "Type 76051 in Zip/Postal textbox", "snapshot=SSMQ_20.inf");
	truclient_step("21", "Click on Phone Number textbox", "snapshot=SSMQ_21.inf");
	truclient_step("22", "Type 8177227584 in Phone Number textbox", "snapshot=SSMQ_22.inf");
	truclient_step("23", "Click on Purchaser's Email textbox", "snapshot=SSMQ_23.inf");
	truclient_step("24", "Type gamestop.soasta.0001@gmail.com in Purchaser's Email textbox", "snapshot=SSMQ_24.inf");
	lr_start_transaction("S01_SSMQ_GuestOrder_FillShippingAdd_T20");
	truclient_step("25", "Click on CONTINUE CHECKOUT ?", "snapshot=SSMQ_25.inf");
	lr_end_transaction("S01_SSMQ_GuestOrder_FillShippingAdd_T20",0);
	truclient_step("26", "Wait 3 seconds", "snapshot=SSMQ_26.inf");
	truclient_step("27", "Scroll We are committed to protecting... into view", "snapshot=SSMQ_27.inf");
	lr_start_transaction("S01_SSMQ_GuestOrder_ContinueCheckout_T25");
	truclient_step("28", "Click on CONTINUE CHECKOUT ?", "snapshot=SSMQ_28.inf");
	lr_end_transaction("S01_SSMQ_GuestOrder_ContinueCheckout_T25",0);
	truclient_step("29", "Select Visa from CardType listbox", "snapshot=SSMQ_29.inf");
	truclient_step("30", "Click on Use another payment type... textbox", "snapshot=SSMQ_30.inf");
	truclient_step("31", "Type 4444333322221111 in Use another payment type... textbox", "snapshot=SSMQ_31.inf");
	truclient_step("32", "Select 08 from Expires listbox", "snapshot=SSMQ_32.inf");
	truclient_step("33", "Select 2020 from 010203040506070809101112 listbox", "snapshot=SSMQ_33.inf");
	truclient_step("34", "Click on Security Code: What's... textbox", "snapshot=SSMQ_34.inf");
	truclient_step("35", "Type 123 in Security Code: What's... textbox", "snapshot=SSMQ_35.inf");
	lr_start_transaction("S01_SSMQ_GuestOrder_MakePayment_T30");
	truclient_step("36", "Click on SUBMIT ORDER", "snapshot=SSMQ_36.inf");
	lr_end_transaction("S01_SSMQ_GuestOrder_MakePayment_T30",0);
	truclient_step("37", "Click on No, Thanks", "snapshot=SSMQ_37.inf");
	truclient_step("38", "Click on Your Order Number:", "snapshot=SSMQ_38.inf");

	return 0;
}
