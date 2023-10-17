//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString;

@interface LoadMatchStatusOperation : ISOperation
{
    NSNumber *_accountID;	// 96 = 0x60
    unsigned long long _matchStatus;	// 104 = 0x68
    NSString *_userAgent;	// 112 = 0x70
}

- (id)_newMatchStatusOperationWithURLBag:(id)arg1;	// IMP=0x0020000000049dca
- (void)run;	// IMP=0x00100000000497d6
@property(copy) NSString *userAgent;
@property(readonly) unsigned long long matchStatus;
- (void)dealloc;	// IMP=0x0010000000049688
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x001000000004962a

@end
