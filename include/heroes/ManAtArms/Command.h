#include "skillDesigns/RangeSkill.h"

namespace Heroes {

    namespace ManAtArms {

        class Command: public skillDesigns::RangeSkill {
        public:
            Command();
            
            void unsafeTargetUse(int crited, std::shared_ptr<BattleField> battleField,
                                 std::shared_ptr<entity::Entity> actor,
                                 std::shared_ptr<entity::Entity> object) override;

            void unsafeSelfUse(int crited, std::shared_ptr<BattleField> battleField,
                               std::shared_ptr<entity::Entity> object) override;
        };

    } // namespace ManAtArms

} // namespace Heroes