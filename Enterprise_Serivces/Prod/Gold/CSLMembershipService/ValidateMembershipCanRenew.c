ValidateMembershipCanRenew()
{
	lr_start_transaction("MembershipService_ValidateMembershipCanRenew");

	web_service_call( "StepName=ValidateMembershipCanRenew_101",
		"SOAPMethod=MembershipService|BasicHttpBinding_IMembershipService|ValidateMembershipCanRenew",
		"ResponseParam=response",
		"Service=MembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484948028.inf",
		BEGIN_ARGUMENTS,
		"LoyaltyCardNumber=3234346578500",
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

	lr_end_transaction("MembershipService_ValidateMembershipCanRenew", LR_AUTO);

	return 0;
}
