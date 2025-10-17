modded class StaminaHandler
{
    // This function is called every frame to update the stamina state.
    // By overriding it with an empty function, we prevent any stamina
    // calculations from happening.
    override void Update(float deltaT, int pCurrentCommandID)
    {
        // Stamina update logic is intentionally left blank.
        // This stops stamina from draining or regenerating based on player actions.
        // The stamina bar will appear full at all times.
    }

    // This function is called when an action should deplete stamina (like sprinting or jumping).
    // We override it to do nothing, effectively preventing any action from costing stamina.
    override void DepleteStamina(EStaminaModifiers modifier, float dT = -1)
    {
        // Stamina depletion logic is intentionally left blank.
    }
}