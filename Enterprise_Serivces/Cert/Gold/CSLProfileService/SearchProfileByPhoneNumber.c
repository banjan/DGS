SearchProfileByPhoneNumber()
{
	lr_start_transaction("ProfileService_SearchProfileByPhoneNumber");

	web_service_call( "StepName=SearchProfileByPhoneNumber_101",
		"SOAPMethod=ProfileService|BasicHttpBinding_IProfileService|SearchProfileByPhoneNumber",
		"ResponseParam=response",
		"Service=ProfileService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485539549.inf",
		BEGIN_ARGUMENTS,
		"PhoneNumber=8174243000",
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

	lr_end_transaction("ProfileService_SearchProfileByPhoneNumber", LR_AUTO);

	return 0;
}
