GetProductAvailabilityForNearbyStores()
{
	lr_start_transaction("StoreInformationService_GetProductAvailabilityForNearbyStores");

	web_service_call( "StepName=GetProductAvailabilityForNearbyStores_101",
		"SOAPMethod=StoreInformationService|BasicHttpBinding_IStoreInformationService|GetProductAvailabilityForNearbyStores",
		"ResponseParam=response",
		"Service=StoreInformationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484783013.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Address>"
					"<AddressGuid>610f2ff9-627d-42e0-ace0-516570d0323d</AddressGuid>"
					"<AddressID>1</AddressID>"
					"<AddressLine1 nil=\"true\"></AddressLine1>"
					"<AddressLine2 nil=\"true\"></AddressLine2>"
					"<AddressLine3 nil=\"true\"></AddressLine3>"
					"<AddressLine4 nil=\"true\"></AddressLine4>"
					"<AddressType>Home</AddressType>"
					"<City nil=\"true\"></City>"
					"<CompanyName nil=\"true\"></CompanyName>"
					"<Country nil=\"true\"></Country>"
					"<County nil=\"true\"></County>"
					"<FirstName nil=\"true\"></FirstName>"
					"<IsDefault>false</IsDefault>"
					"<LastName nil=\"true\"></LastName>"
					"<PostalCode>76051</PostalCode>"
					"<StateOrProvince nil=\"true\"></StateOrProvince>"
				"</Address>"
				"<Sku>642254</Sku>"
				"<ProductID>144</ProductID>"
				"<RadiusInKilometers>100</RadiusInKilometers>"
				"<MaxRecordCount nil=\"true\"></MaxRecordCount>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("StoreInformationService_GetProductAvailabilityForNearbyStores", LR_AUTO);

	return 0;
}
