//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class NSString;

@protocol CLSSignalModel <NSObject>
+ (unsigned long long)latestVersion;
+ (unsigned long long)currentAnalyzerVersion;
+ (NSString *)name;
@property(readonly) unsigned long long version;
@end

