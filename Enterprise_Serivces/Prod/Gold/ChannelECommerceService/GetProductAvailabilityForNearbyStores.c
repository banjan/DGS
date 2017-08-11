GetProductAvailabilityForNearbyStores()
{
	lr_start_transaction("ECommerceService_GetProductAvailabilityForNearbyStores");

	web_service_call( "StepName=GetProductAvailabilityForNearbyStores_101",
		"SOAPMethod=ECommerceService|ECommerceService|GetProductAvailabilityForNearbyStores",
		"ResponseParam=response",
		"Service=ECommerceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484873448.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Address>"
					"<AddressGuid>f1e93797-be92-4581-90fa-2b4f7acc4e21</AddressGuid>"
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
				"<RadiusInKilometers>100</RadiusInKilometers>"
				"<Sku>642254</Sku>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ECommerceService_GetProductAvailabilityForNearbyStores", LR_AUTO);

	return 0;
}
