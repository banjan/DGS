GetTimeSheetsByStore()
{
	lr_start_transaction("EmployeeService_GetTimeSheetsByStore");

	web_service_call( "StepName=GetTimeSheetsByStore_102",
		"SOAPMethod=EmployeeService|BasicHttpBinding_IEmployeeService|GetTimeSheetsByStore",
		"ResponseParam=response",
		"Service=EmployeeService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482956971.inf",
		BEGIN_ARGUMENTS,
		"PayPeriod=current",
		"StoreNumber=3815",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>11438173-e912-4900-a126-6a586f6bb6e6</string>"
				"</Text>"
			"</CorrelationID>",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<Text>test</Text>"				
				"</Text>"
			"</MachineName>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("EmployeeService_GetTimeSheetsByStore", LR_AUTO);
	
	return 0;
}
