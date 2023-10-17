//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractMapServiceTicket.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOIdentifiersTicket : GEOAbstractMapServiceTicket
{
    NSArray *_identifiers;	// 256 = 0x100
    id _requestToken;	// 264 = 0x108
    int _resultProviderID;	// 272 = 0x110
    NSString *_contentProvider;	// 280 = 0x118
    unsigned long long _options;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000000074914c
- (void)cancel;	// IMP=0x00000000007490cf
- (CDStruct_d1a7ebee)dataRequestKind;	// IMP=0x000000000074909e
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x0000000000748df0
- (id)description;	// IMP=0x0000000000748d63
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5;	// IMP=0x0000000000748c5a
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5;	// IMP=0x00000000007489bc
- (id)initWithTraits:(id)arg1;	// IMP=0x000000000074898d

@end

