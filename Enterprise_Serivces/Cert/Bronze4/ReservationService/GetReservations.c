GetReservations()
{
	lr_start_transaction("ReservationService_GetReservations");

	web_service_call( "StepName=GetReservations_101",
		"SOAPMethod=ReservationService|BasicHttpBinding_IReservationService|GetReservations",
		"ResponseParam=response",
		"Service=ReservationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484167336.inf",
		BEGIN_ARGUMENTS,
		"ReservationKeyId=915789",
		"ReservationKeyIdSpecified=true",
		"SinceDate=2013-12-26T12:12:18",
		"SinceDateSpecified=true",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>b987500b-f7e7-4050-8f62-8aad26f519f8</string>"
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

	lr_end_transaction("ReservationService_GetReservations", LR_AUTO);

	return 0;
}
