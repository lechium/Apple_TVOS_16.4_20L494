//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFRequestInfo.h>

@interface AFRequestInfo (SiriAce)
+ (id)_createAnnounceIncomingCallRequest:(id)arg1;	// IMP=0x0010000000269124
+ (id)_announceIncomingCallRequestInfoFromRequest:(id)arg1;	// IMP=0x0010000000269038
+ (id)_createAnnounceInHomeRequestFromSKIAnnouncePayload:(id)arg1;	// IMP=0x0010000000268f5c
+ (id)_announceNotificationRequestInfoFromNotificationRequest:(id)arg1 previousRequest:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3;	// IMP=0x0010000000268b84
+ (id)requestInfoFromAnnouncementRequest:(id)arg1 previousRequest:(id)arg2 synchronousBurstIndex:(unsigned long long)arg3;	// IMP=0x0010000000268a7c
- (void)_ad_setHandoffPayload:(id)arg1;	// IMP=0x00100000001c0d36
- (id)_ad_speechRequestOptionsWithClientConfiguration:(id)arg1;	// IMP=0x00100000001c0a98
- (id)_ad_localRequestCommandWithRequestHelper:(id)arg1;	// IMP=0x00100000001c09db
- (id)_ad_requestCommandWithRequestHelper:(id)arg1;	// IMP=0x00100000001bf9a9
@end

