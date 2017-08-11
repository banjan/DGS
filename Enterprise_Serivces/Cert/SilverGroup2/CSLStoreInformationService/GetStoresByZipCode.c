GetStoresByZipCode()
{
	lr_start_transaction("StoreInformationService_GetStoresByZipCode");

	web_service_call( "StepName=GetStoresByZipCode_101",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|GetStoresByZipCode",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484783373.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<RadialDistance>"
					"<UnitOfMeasureType>Mile</UnitOfMeasureType>"
					"<Value>20</Value>"
				"</RadialDistance>"
				"<ZipCode>32809</ZipCode>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreInformationService_GetStoresByZipCode", LR_AUTO);

	return 0;
}
