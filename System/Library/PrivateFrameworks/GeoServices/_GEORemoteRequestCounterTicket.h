//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEORequestCounterTicketBase.h"

@class GEORequestCounterRemoteProxy;

__attribute__((visibility("hidden")))
@interface _GEORemoteRequestCounterTicket : GEORequestCounterTicketBase
{
    GEORequestCounterRemoteProxy *_remoteProxy;	// 8 = 0x8
}

+ (id)requestCounterTicketForType:(CDStruct_d1a7ebee)arg1 appId:(id)arg2 remoteProxy:(id)arg3;	// IMP=0x00600000003e41ab
- (void).cxx_destruct;	// IMP=0x00000000003e4245
- (void)_incrementForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 requestType:(CDStruct_d1a7ebee)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 usedInterfaces:(unsigned long long)arg8;	// IMP=0x00000000003e4228

@end

