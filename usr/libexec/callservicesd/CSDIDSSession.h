//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSUUID;
@protocol CSDIDSSessionProvider;

@interface CSDIDSSession : NSObject
{
    id <CSDIDSSessionProvider> _sessionProvider;	// 8 = 0x8
    NSMutableDictionary *_preferences;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000012644b
@property(readonly, nonatomic) NSMutableDictionary *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) id <CSDIDSSessionProvider> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) NSUUID *clientUUID;
@property(nonatomic, getter=isCellularDataPreferred) _Bool cellularDataPreferred;
@property(nonatomic, getter=isCellularDataAllowed) _Bool cellularDataAllowed;
@property(nonatomic, getter=isWiFiAllowed) _Bool wiFiAllowed;
- (void)_updateSessionPreferences;	// IMP=0x0010000000125cc3
@property(readonly, copy, nonatomic) NSString *UUID;
@property(readonly, copy, nonatomic) NSString *propertiesDescription;
- (id)description;	// IMP=0x0010000000125b7f
- (id)initWithSessionProvider:(id)arg1;	// IMP=0x0010000000125aea
- (id)init;	// IMP=0x0010000000125a60

@end

