GetMembershipByCardNumber()
{
	lr_start_transaction("MembershipService_GetMembershipByCardNumber");

	web_service_call( "StepName=GetMembershipByCardNumber_101",
		"SOAPMethod=MembershipService|BasicHttpBinding_IMembershipService|GetMembershipByCardNumber",
		"ResponseParam=response",
		"Service=MembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1486571701.inf",
		BEGIN_ARGUMENTS,
		"xml:CardNumbers="
			"<CardNumbers>"
				"<string>abcde</string>"
			"</CardNumbers>",
		"VendorId=1",
		"VendorIdSpecified=true",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>2857FD96-E40F-4096-A55B-F088C11353CF</string>"
				"</Text>"
			"</CorrelationID>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("MembershipService_GetMembershipByCardNumber", LR_AUTO);

	return 0;
}
