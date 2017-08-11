GetRecordsBySKUs()
{
	lr_start_transaction("TradeValueService_GetRecordsBySKUs");

	web_service_call( "StepName=GetRecordsBySKUs_101",
		"SOAPMethod=TradeValueService|BasicHttpBinding_TradeValueService|GetRecordsBySKUs",
		"ResponseParam=response",
		"Service=TradeValueService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1488471260.inf",
		BEGIN_ARGUMENTS,
		"Concept=store",
		"xml:SKUs="
			"<SKUs>"
				"<string>952123</string>"
			"</SKUs>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>3fb4b06e-60c6-4e18-bb85-8411871743f3</string>"
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
	
	lr_end_transaction("TradeValueService_GetRecordsBySKUs", LR_AUTO);

	return 0;
}
