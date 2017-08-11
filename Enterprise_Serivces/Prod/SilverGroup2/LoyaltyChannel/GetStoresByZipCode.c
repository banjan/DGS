GetStoresByZipCode()
{
	lr_start_transaction("LoyaltyService_GetStoresByZipCode");

	web_service_call( "StepName=GetStoresByZipCode_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetStoresByZipCode",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484857257.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<RadialDistance>"
					"<UnitOfMeasureType>Mile</UnitOfMeasureType>"
					"<Value>50</Value>"
				"</RadialDistance>"
				"<ZipCode>76051</ZipCode>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_GetStoresByZipCode", LR_AUTO);

	return 0;
}
