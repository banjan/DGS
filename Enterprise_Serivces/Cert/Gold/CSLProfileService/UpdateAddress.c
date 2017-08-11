UpdateAddress()
{
	lr_start_transaction("ProfileService_UpdateAddress");

	web_service_call( "StepName=UpdateAddress_101",
		"SOAPMethod=ProfileService|BasicHttpBinding_IProfileService|UpdateAddress",
		"ResponseParam=response",
		"Service=ProfileService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485549235.inf",
		BEGIN_ARGUMENTS,
		"xml:Address="
			"<Address>"
				"<AddressId>123456789</AddressId>"
				"<AddressType>Billing</AddressType>"
				"<City>Grapevine</City>"
				"<Country>US</Country>"
				"<Default>false</Default>"
				"<IsValidated>true</IsValidated>"
				"<Line1>625 Westport Pkwy</Line1>"
				"<Line2>Gamestop</Line2>"
				"<PostalCode>76051</PostalCode>"
				"<ProfileId>1256761837</ProfileId>"
				"<RecipientFirstName>FirstShipping</RecipientFirstName>"
				"<RecipientLastName>LastShipping</RecipientLastName>"
				"<RecipientPhoneNumber>1234567890</RecipientPhoneNumber>"
				"<State>TX</State>"
			"</Address>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>ee378a17-4acc-475e-b100-509195a48980</string>"
				"</Text>"
			"</CorrelationID>",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProfileService_UpdateAddress", LR_AUTO);

	return 0;
}
