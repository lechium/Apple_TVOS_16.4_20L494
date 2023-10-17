//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CKDSystemAvailabilityWatcher;

@interface CKDSystemAvailabilityWatcherWrapper : NSObject
{
    id <CKDSystemAvailabilityWatcher> _delegate;	// 8 = 0x8
    unsigned long long _savedDelegateHash;	// 16 = 0x10
    NSString *_personaID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fb45b
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(nonatomic) unsigned long long savedDelegateHash; // @synthesize savedDelegateHash=_savedDelegateHash;
@property(nonatomic) __weak id <CKDSystemAvailabilityWatcher> delegate; // @synthesize delegate=_delegate;
- (id)description;	// IMP=0x00000000000fb31f
- (unsigned long long)hash;	// IMP=0x00000000000fb315
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fb290
- (void)postSystemAvailabilityChanged:(unsigned long long)arg1;	// IMP=0x00000000000fb206
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000fb174

@end

