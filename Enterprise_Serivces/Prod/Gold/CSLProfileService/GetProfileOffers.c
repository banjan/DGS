GetProfileOffers()
{
	lr_start_transaction("ProfileService_GetProfileOffers");

	web_service_call( "StepName=GetProfileOffers_101",
		"SOAPMethod=ProfileService|BasicHttpBinding_IProfileService|GetProfileOffers",
		"ResponseParam=response",
		"Service=ProfileService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1486572960.inf",
		BEGIN_ARGUMENTS,
		"ProfileId=1254455252",
		"ProfileIdSpecified=true",
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

	lr_end_transaction("ProfileService_GetProfileOffers", LR_AUTO);

	return 0;
}
