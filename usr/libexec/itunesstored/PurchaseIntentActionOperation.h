//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface PurchaseIntentActionOperation : ISOperation
{
    NSString *_appBundleId;	// 96 = 0x60
    unsigned long long _action;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000001d5110
- (void)run;	// IMP=0x00100000001d4dfe
- (id)initWithRequest:(id)arg1;	// IMP=0x00100000001d4d5c

@end

