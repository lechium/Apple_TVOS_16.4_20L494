//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol XCTDSiriAnalytics, XCTDSiriConnection, XCTDSiriPreferences;

@protocol XCTDSiriSystemInterface <NSObject>
@property(readonly) CDUnknownFunctionPointerType recognitionStringsFunc;
@property(readonly) CDUnknownFunctionPointerType audioInputPathsFunc;
@property(readonly) id <XCTDSiriPreferences> preferences;
@property(readonly) id <XCTDSiriAnalytics> analytics;
- (id <XCTDSiriConnection>)newConnection;
@end
