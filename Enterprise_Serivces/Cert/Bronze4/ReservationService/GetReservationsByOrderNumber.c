GetReservationsByOrderNumber()
{
	lr_start_transaction("ReservationService_GetReservationsByOrderNumber");

	web_service_call( "StepName=GetReservationsByOrderNumber_102",
		"SOAPMethod=ReservationService|BasicHttpBinding_IReservationService|GetReservationsByOrderNumber",
		"ResponseParam=response",
		"Service=ReservationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484167467.inf",
		BEGIN_ARGUMENTS,
		"OrderReferenceNumber=33693832410462",
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

	lr_end_transaction("ReservationService_GetReservationsByOrderNumber", LR_AUTO);

	return 0;
}
