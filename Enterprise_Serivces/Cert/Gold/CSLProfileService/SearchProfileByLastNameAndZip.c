SearchProfileByLastNameAndZip()
{
	lr_start_transaction("ProfileService_SearchProfileByLastNameAndZip");

	web_service_call( "StepName=SearchProfileByLastNameAndZip_101",
		"SOAPMethod=ProfileService|BasicHttpBinding_IProfileService|SearchProfileByLastNameAndZip",
		"ResponseParam=response",
		"Service=ProfileService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485538946.inf",
		BEGIN_ARGUMENTS,
		"LastName=test",
		"ZipCode=76051",
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

	lr_end_transaction("ProfileService_SearchProfileByLastNameAndZip", LR_AUTO);

	return 0;
}
