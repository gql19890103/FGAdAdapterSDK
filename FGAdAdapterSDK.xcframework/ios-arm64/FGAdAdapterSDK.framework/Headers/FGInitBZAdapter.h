//
//  FGInitBZAdapter.h
//  FGAdAdapterSDK
//
//  Created by Amy on 2025/8/8.
//

#import <Foundation/Foundation.h>
#import <AMPSAdSDK/AMPSAdSDK.h>

NS_ASSUME_NONNULL_BEGIN
/// Adapter Version     1.4.0
@interface FGInitBZAdapter : NSObject <AMPSCustomConfigureProtocol>

@property (nonatomic, assign, class) AdScopeMediationAdapterInitSDKState initState;

@end

NS_ASSUME_NONNULL_END
