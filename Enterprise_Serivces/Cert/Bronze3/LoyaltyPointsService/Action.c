Action()
{	
	
	web_service_call( "StepName=GetAllPointsHistory_102",
		"SOAPMethod=LoyaltyPointsService|BasicHttpBinding_ILoyaltyPointsService|GetAllPointsHistory",
		"ResponseParam=response",
		"Service=LoyaltyPointsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1481927503.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>123456789</CustomerID>"
				"<NumberOfItemsPerPage>5</NumberOfItemsPerPage>"
				"<PageNumber>1</PageNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	web_service_call( "StepName=GetPointsBalance_103",
		"SOAPMethod=LoyaltyPointsService|BasicHttpBinding_ILoyaltyPointsService|GetPointsBalance",
		"ResponseParam=response",
		"Service=LoyaltyPointsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1481925556.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>123456</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	web_service_call( "StepName=GetPointsHistory_102",
		"SOAPMethod=LoyaltyPointsService|BasicHttpBinding_ILoyaltyPointsService|GetPointsHistory",
		"ResponseParam=response",
		"Service=LoyaltyPointsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1481927896.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>123456</CustomerID>"
				"<NumberOfItemsPerPage>6</NumberOfItemsPerPage>"
				"<PageNumber>2</PageNumber>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	web_service_call( "StepName=GetPointSubTypes_102",
		"SOAPMethod=LoyaltyPointsService|BasicHttpBinding_ILoyaltyPointsService|GetPointSubTypes",
		"ResponseParam=response",
		"Service=LoyaltyPointsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482160220.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<PointType>SalesTransaction</PointType>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

//	web_service_call( "StepName=GetVersion_101",
//		"SOAPMethod=LoyaltyPointsService|BasicHttpBinding_ILoyaltyPointsService|GetVersion",
//		"ResponseParam=response",
//		"Service=LoyaltyPointsService",
//		"ExpectedResponse=SoapResult",
//		"Snapshot=t1482160561.inf",
//		BEGIN_ARGUMENTS,
//		END_ARGUMENTS,
//		BEGIN_RESULT,
//		END_RESULT,
//		LAST);
//	
//	web_service_call( "StepName=IsServiceAlive_101",
//		"SOAPMethod=LoyaltyPointsService|BasicHttpBinding_ILoyaltyPointsService|IsServiceAlive",
//		"ResponseParam=response",
//		"Service=LoyaltyPointsService",
//		"ExpectedResponse=SoapResult",
//		"Snapshot=t1482160814.inf",
//		BEGIN_ARGUMENTS,
//		END_ARGUMENTS,
//		BEGIN_RESULT,
//		END_RESULT,
//		LAST);

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=LoyaltyPointsService|BasicHttpBinding_ILoyaltyPointsService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=LoyaltyPointsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482161721.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	web_service_call( "StepName=SendPointsActivity_101",
		"SOAPMethod=LoyaltyPointsService|BasicHttpBinding_ILoyaltyPointsService|SendPointsActivity",
		"ResponseParam=response",
		"Service=LoyaltyPointsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482161809.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<PointsActivityInfo>"
					"<BasePoints>1</BasePoints>"
					"<Channel>"
						"<ChannelID>123456789</ChannelID>"
						"<Name>ChannelTest</Name>"
					"</Channel>"
					"<CustomerId>1000131178</CustomerId>"
					"<Description nil=\"true\"></Description>"
					"<EventDate>2016-08-15T15:43:32.553</EventDate>"
					"<IconImageUrl nil=\"true\"></IconImageUrl>"
					"<PointSubTypeDisplayText nil=\"true\"></PointSubTypeDisplayText>"
					"<PointSubTypeName nil=\"true\"></PointSubTypeName>"
					"<ReferenceGuid>4216f9a4-460f-4b22-9489-7a850fff2e7a</ReferenceGuid>"
				"</PointsActivityInfo>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);
	
	return 0;
}
