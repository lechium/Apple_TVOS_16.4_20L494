//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNAPITriageLogger, CNContactsLogger, CNFavoritesLogger, CNImageUtilitiesLogger, CNRegulatoryLogger, CNSpotlightIndexingLogger;

__attribute__((visibility("hidden")))
@interface CNMockLoggerProvider : NSObject
{
    id <CNContactsLogger> _contactsLogger;	// 8 = 0x8
    id <CNSpotlightIndexingLogger> _spotlightIndexingLogger;	// 16 = 0x10
    id <CNRegulatoryLogger> _regulatoryLogger;	// 24 = 0x18
    id <CNFavoritesLogger> _favoritesLogger;	// 32 = 0x20
    id <CNAPITriageLogger> _apiTriageLogger;	// 40 = 0x28
    id <CNImageUtilitiesLogger> _imageUtilitiesLogger;	// 48 = 0x30
}

+ (id)loggerProvider;	// IMP=0x00100000000439a5
- (void).cxx_destruct;	// IMP=0x0000000000043b13
@property(retain, nonatomic) id <CNImageUtilitiesLogger> imageUtilitiesLogger; // @synthesize imageUtilitiesLogger=_imageUtilitiesLogger;
@property(retain, nonatomic) id <CNAPITriageLogger> apiTriageLogger; // @synthesize apiTriageLogger=_apiTriageLogger;
@property(retain, nonatomic) id <CNFavoritesLogger> favoritesLogger; // @synthesize favoritesLogger=_favoritesLogger;
@property(retain, nonatomic) id <CNRegulatoryLogger> regulatoryLogger; // @synthesize regulatoryLogger=_regulatoryLogger;
@property(retain, nonatomic) id <CNSpotlightIndexingLogger> spotlightIndexingLogger; // @synthesize spotlightIndexingLogger=_spotlightIndexingLogger;
@property(retain, nonatomic) id <CNContactsLogger> contactsLogger; // @synthesize contactsLogger=_contactsLogger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

