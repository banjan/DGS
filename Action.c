//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("S01_SSSQ_GuestOrder_HomePage_T00");
	truclient_step("1", "Navigate to 'http://qa.gamestop.com/'", "snapshot=Action_1.inf");
	lr_end_transaction("S01_SSSQ_GuestOrder_HomePage_T00",0);
	truclient_step("2", "Click on Find games, consoles,... textbox", "snapshot=Action_2.inf");
	truclient_step("3", "Type TC.getParam('SKU') in Find games, consoles,... textbox", "snapshot=Action_3.inf");
	lr_start_transaction("S01_SSSQ_GuestOrder_SearchProduct_T05");
	truclient_step("4", "Press Enter key on Find games, consoles,... textbox", "snapshot=Action_4.inf");
	lr_end_transaction("S01_SSSQ_GuestOrder_SearchProduct_T05",0);
	lr_start_transaction("S01_SSSQ_GuestOrder_AddToCart_T10");
	truclient_step("5", "Click on Add to Cart javascript_link", "snapshot=Action_5.inf");
	lr_end_transaction("S01_SSSQ_GuestOrder_AddToCart_T10",0);
	truclient_step("6", "Click on Checkout link", "snapshot=Action_6.inf");
	truclient_step("7", "Wait 3 seconds", "snapshot=Action_7.inf");
	truclient_step("8", "Click on CONTINUE CHECKOUT ? link", "snapshot=Action_8.inf");
	lr_start_transaction("S01_SSSQ_GuestOrder_ContinueAsGuest_T15");
	truclient_step("9", "Click on CONTINUE AS GUEST link", "snapshot=Action_9.inf");
	lr_end_transaction("S01_SSSQ_GuestOrder_ContinueAsGuest_T15",0);
	truclient_step("10", "Click on First Name textbox", "snapshot=Action_10.inf");
	truclient_step("11", "Type accept in First Name textbox", "snapshot=Action_11.inf");
	truclient_step("12", "Type accept in Last Name textbox", "snapshot=Action_12.inf");
	truclient_step("13", "Type 625 westport pkwy in Address 1 textbox", "snapshot=Action_13.inf");
	truclient_step("14", "Type grapevine in City textbox", "snapshot=Action_14.inf");
	truclient_step("15", "Select Texas from State/Province listbox", "snapshot=Action_15.inf");
	truclient_step("16", "Type 76051 in Zip/Postal textbox", "snapshot=Action_16.inf");
	truclient_step("17", "Type 8177227584 in Phone Number textbox", "snapshot=Action_17.inf");
	truclient_step("18", "Type gamestop.soasta.0001@gmail.com in Purchaser's Email textbox", "snapshot=Action_18.inf");
	truclient_step("19", "Scroll CONTINUE CHECKOUT ? into view", "snapshot=Action_19.inf");
	lr_start_transaction("S01_SSSQ_GuestOrder_FillShippingAdd_T20");
	truclient_step("21", "Click on CONTINUE CHECKOUT ?", "snapshot=Action_21.inf");
	lr_end_transaction("S01_SSSQ_GuestOrder_FillShippingAdd_T20",0);
	truclient_step("23", "Wait 3 seconds", "snapshot=Action_23.inf");
	truclient_step("24", "Scroll CONTINUE CHECKOUT ? into view", "snapshot=Action_24.inf");
	truclient_step("25", "Scroll We are committed to protecting... into view", "snapshot=Action_25.inf");
	truclient_step("26", "Wait 3 seconds", "snapshot=Action_26.inf");
	lr_start_transaction("S01_SSSQ_GuestOrder_ContinueCheckout_T25");
	truclient_step("27", "Click on CONTINUE CHECKOUT ?", "snapshot=Action_27.inf");
	lr_end_transaction("S01_SSSQ_GuestOrder_ContinueCheckout_T25",0);
	truclient_step("29", "Wait 3 seconds", "snapshot=Action_29.inf");
	truclient_step("30", "Scroll SUBMIT ORDER into view", "snapshot=Action_30.inf");
	truclient_step("31", "Select Visa from CardType listbox", "snapshot=Action_31.inf");
	truclient_step("32", "Click on Use another payment type... textbox", "snapshot=Action_32.inf");
	truclient_step("33", "Type 4444333322221111 in Use another payment type... textbox", "snapshot=Action_33.inf");
	truclient_step("34", "Select 08 from Expires listbox", "snapshot=Action_34.inf");
	truclient_step("35", "Select 2020 from 010203040506070809101112 listbox", "snapshot=Action_35.inf");
	truclient_step("36", "Click on Security Code: What's... textbox", "snapshot=Action_36.inf");
	truclient_step("37", "Type 123 in Security Code: What's... textbox", "snapshot=Action_37.inf");
	lr_start_transaction("S01_SSSQ_GuestOrder_MakePayment_T30");
	truclient_step("38", "Click on SUBMIT ORDER", "snapshot=Action_38.inf");
	lr_end_transaction("S01_SSSQ_GuestOrder_MakePayment_T30",0);
	truclient_step("39", "Wait 5 seconds", "snapshot=Action_39.inf");
	truclient_step("40", "If Thanks for your order! heading exists", "snapshot=Action_40.inf");
	{
		truclient_step("40.1", "Click on No, Thanks", "snapshot=Action_40.1.inf");
	}
	truclient_step("41", "Wait 3 seconds", "snapshot=Action_41.inf");
	truclient_step("42", "Click on Your Order Number:", "snapshot=Action_42.inf");
	truclient_step("43", "Wait 3 seconds", "snapshot=Action_43.inf");
	truclient_step("44", "Evaluate JavaScript var text = object.textCo...rs',randomText); on Your Order Number:", "snapshot=Action_44.inf");

	return 0;
}
