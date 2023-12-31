//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEORequestCounterTicketBase.h"

@class GEORequestCounterPersistence;

__attribute__((visibility("hidden")))
@interface _GEOLocalRequestCounterTicket : GEORequestCounterTicketBase
{
    GEORequestCounterPersistence *_persistence;	// 8 = 0x8
}

+ (id)requestCounterTicketForType:(CDStruct_d1a7ebee)arg1 appId:(id)arg2 persistence:(id)arg3;	// IMP=0x006000000103e61d
- (void).cxx_destruct;	// IMP=0x000000000103e8b4
- (void)_incrementForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 requestType:(CDStruct_d1a7ebee)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 usedInterfaces:(unsigned long long)arg8;	// IMP=0x000000000103e69a

@end

