UpdateHopsConfigurationForStore()
{
	lr_start_transaction("HopsService_UpdateHopsConfigurationForStore");

	web_service_call( "StepName=UpdateHopsConfigurationForStore_101",
		"SOAPMethod=HopsService|BasicHttpBinding_IHopsService|UpdateHopsConfigurationForStore",
		"ResponseParam=response",
		"Service=HopsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487088359.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CountryCode>US</CountryCode>"
				"<HopsConfiguration>"
					"<ExpireExtensionDuration>180000</ExpireExtensionDuration>"
					"<HopsEnabled>true</HopsEnabled>"
					"<IsStoreOpen>true</IsStoreOpen>"
					"<PickupExpirationDuration>48</PickupExpirationDuration>"
					"<RequestWarningThreshold>3</RequestWarningThreshold>"
					"<ServerPollingPeriod>180000</ServerPollingPeriod>"
				"</HopsConfiguration>"
				"<StoreNumber>16</StoreNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("HopsService_UpdateHopsConfigurationForStore", LR_AUTO);

	return 0;
}
