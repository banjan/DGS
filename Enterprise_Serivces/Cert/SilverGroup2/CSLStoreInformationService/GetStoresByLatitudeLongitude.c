GetStoresByLatitudeLongitude()
{
	lr_start_transaction("StoreInformationService_GetStoresByLatitudeLongitude");

	web_service_call( "StepName=GetStoresByLatitudeLongitude_101",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|GetStoresByLatitudeLongitude",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484798039.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Latitude>32.67759</Latitude>"
				"<Longitude>-97.3955</Longitude>"
				"<RadialDistance>"
					"<UnitOfMeasureType>Mile</UnitOfMeasureType>"
					"<Value>50</Value>"
				"</RadialDistance>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	lr_end_transaction("StoreInformationService_GetStoresByLatitudeLongitude", LR_AUTO);

	return 0;
}
