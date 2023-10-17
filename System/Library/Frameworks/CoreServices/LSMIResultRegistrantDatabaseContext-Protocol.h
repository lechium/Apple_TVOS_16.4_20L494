//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSObject-Protocol.h>

@class FSNode, LSApplicationRecord, NSDictionary, NSString;

@protocol LSMIResultRegistrantDatabaseContext <NSObject>
- (void (^)(id))unregisterApplicationWithBundleIdentifier:(NSString *)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (LSApplicationRecord *)findContainerizedRecordForBundleUnit:(unsigned int)arg1 error:(id *)arg2;
- (unsigned int)findOrRegisterContainerizedNodeReinitializingContext:(FSNode *)arg1 installDictionary:(NSDictionary *)arg2 error:(id *)arg3;
- (_Bool)fullBundleExistsForIdentifier:(NSString *)arg1 matchingNode:(FSNode *)arg2;
@end
